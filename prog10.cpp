/*
Author: Ken Mitchell
Assignment Title: Average Start and Stop Time
Assignment Description: Find Average Start and Stop
Due Date: 6/23/2025
Date Created: 6/23/2025
Date Last Modified: 6/23/2025
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Data Abstraction
    ifstream file1, file2, file3;
    string fName1, fName2, fName3;
    string trash, ampm;
    bool err = false;
    int hrs, minute, sec;
    char c;
    int start1 = 0, stop1 = 0;
    int start2 = 0, stop2 = 0;
    int start3 = 0, stop3 = 0;
    int avgStart = 0, avgStop = 0;
    int avgHrsStart = 0, avgMinStart = 0;
    int avgHrsStop = 0, avgMinStop = 0;
    string startAmpm, stopAmpm;

    // Input
    cin >> fName1 >> fName2 >> fName3;

    // Process
    file1.open(fName1);
    file2.open(fName2);
    file3.open(fName3);

    if (!file1 || !file2 || !file3) {
        cout << "Error: Bad Data";
        err = true;
    }
    if (!err) {

        // Start - file1
        file1 >> trash >> hrs >> c >> minute >> c >> sec >> ampm;

        if (hrs == 12) {
            hrs = 0;
        }
        if (ampm == "PM") {
            hrs += 12;
        }

        start1 = (hrs * 3600) + (minute * 60) + sec;

        // Stop - file1
        file1 >> trash >> hrs >> c >> minute >> c >> sec >> ampm;

        if (hrs == 12) {
            hrs = 0;
        }
        if (ampm == "PM") {
            hrs += 12;
        }

        stop1 = (hrs * 3600) + (minute * 60) + sec;


        // Start - file2
        file2 >> trash >> hrs >> c >> minute >> c >> sec >> ampm;

        if (hrs == 12) {
            hrs = 0;
        }
        if (ampm == "PM") {
            hrs += 12;
        }

        start2 = (hrs * 3600) + (minute * 60) + sec;

        // Stop - file2
        file2 >> trash >> hrs >> c >> minute >> c >> sec >> ampm;

        if (hrs == 12) {
            hrs = 0;
        }
        if (ampm == "PM") {
            hrs += 12;
        }

        stop2 = (hrs * 3600) + (minute * 60) + sec;

        // Start - file3
        file3 >> trash >> hrs >> c >> minute >> c >> sec >> ampm;

        if (hrs == 12) {
            hrs = 0;
        }
        if (ampm == "PM") {
            hrs += 12;
        }

        start3 = (hrs * 3600) + (minute * 60) + sec;

        // Stop - file3
        file3 >> trash >> hrs >> c >> minute >> c >> sec >> ampm;

        if (hrs == 12) {
            hrs = 0;
        }
        if (ampm == "PM") {
            hrs += 12;
        }

        stop3 = (hrs * 3600) + (minute * 60) + sec;


        avgStart = (start1 + start2 + start3) / 3;
        avgStart -= avgStart % 60;


        avgStop = (stop1 + stop2 + stop3) /3;
        if (avgStop % 60 != 0) {
            avgStop = avgStop + (60 - (avgStop % 60));
        }


        avgHrsStart = (avgStart / 3600) % 24;
        avgMinStart = (avgStart % 3600) / 60;

        if (avgHrsStart >= 12) {
            startAmpm = "PM";
        }
        else {
            startAmpm = "AM";
        }

        if (avgHrsStart > 12) {
            avgHrsStart -= 12;
        }
        if (avgHrsStart == 0) {
            avgHrsStart = 12;
        }

        avgHrsStop = (avgStop / 3600) % 24;
        avgMinStop = (avgStop % 3600) / 60;

        if (avgHrsStop >= 12) {
            stopAmpm = "PM";
        }
        else {
            stopAmpm = "AM";
        }

        if (avgHrsStop > 12) {
            avgHrsStop -= 12;
        }
        if (avgHrsStop == 0) {
            avgHrsStop = 12;
        }


        // Output
        if (avgMinStart < 10) {
          cout << "Average Start Time:  " << avgHrsStart << ":0" << avgMinStart
          << ":00 " << startAmpm << endl;
        }
        else{
            cout << "Average Start Time:  " << avgHrsStart << ":" <<
            avgMinStart << ":00 " << startAmpm << endl;
        }

        if (avgMinStop < 10) {
            cout << "Average Stop Time:  " << avgHrsStop << ":0" << avgMinStop
            << ":00 " << stopAmpm << endl;
        }
        else {
            cout << "Average Stop Time:  " << avgHrsStop << ":" << avgMinStop
            << ":00 " << stopAmpm << endl;
        }

    }

    file1.close();
    file2.close();
    file3.close();

    return 0;
}
