/*
Author: Ken Mitchell
Assignment Title: Min Max Sum Count Average
Assignment Description: Find min, max, sum, etc.
Due Date: 6/24/2025
Date Created: 6/24/2025
Date Last Modified: 6/24/2025
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // Data Abstraction
    ifstream inputFile;
    int sum = 0;
    int min = 0, max = 0;
    double average = 0.0, count = 0.0;
    string filename;
    int x;

    // Input & Process
    while (true) {
        cout << "Enter Data File Name: ";
        cin >> filename;
        cout << filename << endl;

        // Process
        inputFile.open(filename);

        if (!inputFile) {
            cout << "Error: File Failed to Open." << endl;
            continue;
        }
        else {
            break;
        }
    }

    if (inputFile >> x) {
        min = x;
        max = x;
        sum += x;
        count++;

        while (inputFile >> x) {
            sum += x;
            count++;

            if (x < min) {
                min = x;
            }
            if (x > max) {
                max = x;
            }
        }
    }

    average = sum / count;

    inputFile.close();

    // Output
    cout << endl;
    cout << "Min = " << min << endl;
    cout << "Max = " << max << endl;
    cout << "Sum = " << sum << endl;
    cout << "Count = " << count << endl;
    cout << fixed << setprecision(2);
    cout << "Average = " << average << endl;
}
