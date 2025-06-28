/*
Author: Ken Mitchell
Assignment Title: Letter Grade
Assignment Description: Program a Grade Report
Due Date: 6/17/2025
Date Created: 6/17/2025
Date Last Modified: 6/17/2025
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Data Abstraction
    double x1, x2, x3, x4, x5;
    double y1=0, y2=0, y3=0, y4=0, y5=0;
    char finalGrade;
    double temp = 0;
    double avg = 0, max = 0, min = 0, median = 0;
    bool errorBad = false;

    // Input
    cin >> x1 >> x2 >> x3 >> x4 >> x5;

    // Process
    errorBad = ((x1 < 0 || x1 > 100) ||
        (x2 < 0 || x2 > 100) ||
        (x3 < 0 || x3 > 100) ||
        (x4 < 0 || x4 > 100) ||
        (x5 < 0 || x5 > 100));

    avg = (x1 + x2 + x3 + x4 + x5) / 5.0;

    y1 = x1;
    y2 = x2;
    y3 = x3;
    y4 = x4;
    y5 = x5;

    if (x1 > x2) {
        temp = x1;
        x1 = x2;
        x2 = temp;
    }
    if (x1 > x3) {
        temp = x1;
        x1 = x3;
        x3 = temp;
    }
    if (x1 > x4) {
        temp = x1;
        x1 = x4;
        x4 = temp;
    }
    if (x1 > x5) {
        temp = x1;
        x1 = x5;
        x5 = temp;
    }

    if (x2 < x3) {
        temp = x2;
        x2 = x3;
        x3 = temp;
    }
    if (x2 > x4) {
        temp = x2;
        x2 = x4;
        x4 = temp;
    }
    if (x2 > x5) {
        temp = x2;
        x2 = x5;
        x5 = temp;
    }
    if (x3 > x4) {
        temp = x3;
        x3 = x4;
        x4 = temp;
    }
    if (x3 > x5) {
        temp = x3;
        x3 = x5;
        x5 = temp;
    }

    if (x4 > x5) {
        temp = x4;
        x4 = x5;
        x5 = temp;
    }

    max = x5;
    min = x1;
    median = x3;


    if (avg >= 89.5) {
        finalGrade = 'A';
    }
    else if (avg >= 79.5 && avg <= 89.49) {
        finalGrade = 'B';
    }
    else if (avg >= 69.5 && avg <= 79.49) {
        finalGrade = 'C';
    }
    else if (avg >= 59.5 && avg <= 69.49) {
        finalGrade = 'D';
    }
    else {
        finalGrade = 'F';
    }

    // Output
    cout << fixed << setprecision(2);
    cout << "Please Enter Five Test Scores." << endl;
    cout << y1 << " " << y2 << " " << y3
    << " " << y4 << " " << y5 << endl;
    cout << endl;
    if (errorBad) {
        cout << "Error: Bad Data" << endl;
    }
    else {
        cout << "Average = " << avg << endl;
        cout << "Grade   = " << finalGrade << endl;
        cout << "Min     = " << min << endl;
        cout << "Max     = " << max << endl;
        cout << "Median  = " << median << endl;
    }
    return 0;
}