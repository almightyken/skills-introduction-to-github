/*
Author: Ken Mitchell
Assignment Title: Program 13 - GPS
Assignment Description: Process a stream of GPS data
Due Date: 6/26/2025
Date Created: 6/26/2025
Date Last Modified: 6/26/2025
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    // Data Abstraction
    ifstream inputFile;
    string inGPSFile, trash, command;
    bool fileError = false;
    double totalDist = 0.0;
    double avgDist = 0.0;
    double x = 0.0, y = 0.0;
    double startX = 0.0, startY = 0.0;
    double prevX = 0.0, prevY = 0.0;
    double dx = 0.0, dy = 0.0;
    double dist = 0.0;
    double finalX = 0.0, finalY = 0.0;
    double distSum = 0.0, count = 0.0;
    double distToStart = 0.0;
    bool go = false;

    // Input
    do {
        cout << "Please Enter The Name Of The Data File: ";
        cin >> inGPSFile;
        cout << inGPSFile << endl;

        inputFile.open(inGPSFile);

        if (!inputFile) {
            cout << "Error: File Failed to Open." << endl;
        }
        else {
            fileError = true;
        }
    } while (!fileError);

    // Process
    getline(inputFile, trash); // skip first line in file
    getline(inputFile, trash); // skip second line in file

    if (fileError) {

        while(inputFile >> command >> x >> y) {

            if (command == "START") {
                startX = x;
                startY = y;
                prevX = x;
                prevY = y;
                go = true;
            }
            if ((command == "DATA" || command == "STOP") && go) {
                dx = x - prevX;
                dy = y - prevY;

                dist = sqrt(pow(dx, 2) + pow(dy, 2));
                totalDist += dist;

                distToStart = sqrt(pow(x - startX, 2) + pow(y - startY, 2));
                distSum += distToStart;

                count++;

                if (command == "STOP") {
                    finalX = x;
                    finalY = y;
                    go = false;
                }
            }

            prevX = x;
            prevY = y;
        }
    }

    distToStart = sqrt(pow(finalX - startX, 2) + pow(finalY - startY, 2));

    if (count > 0) {
        avgDist = distSum / count;
    }
    else {
        count = 0.0;
    }

    inputFile.close();

    // Output
    cout << endl;
    cout << fixed << setprecision(1);
    cout << "Final Location: (" << finalX << ", " << finalY << ")" << endl;
    cout << "Total distance traveled " << totalDist << endl;
    cout << "Distance to starting point " << distToStart << endl;
    cout << "Average distance to start point = " << avgDist << endl;

    return 0;
}
