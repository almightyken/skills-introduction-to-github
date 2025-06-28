/*
Author: Ken Mitchell
Assignment Title: Data Transformation
Assignment Description: Transform Data based on File
Due Date: 6/20/2025
Date Created: 6/20/2025
Date Last Modified: 6/20/2025
*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    // Data Abstraction
    ifstream inFile;
    ofstream outFile;
    string inFilename, outFilename;
    string trash, instruct;
    double sum = 0, product = 1;
    double diff = 0, quo = 1;
    double val;
    int i;
    double result;
    bool error = false;


    // Input
    cout << "Enter File Names: ";
    cin >> inFilename;
    cin >> outFilename;

    // Process

    inFile.open(inFilename);
    outFile.open(outFilename);

    if(!inFile || !outFile) {
        cout << "Error: Bad Data" << endl;
        error = true;
    }
    if (!error) {
        getline(inFile, trash);
        getline(inFile, trash);

        inFile >> val;
        sum += val;
        product *= val;
        diff = val; // Initalize fist value
        quo = val; // Initalize first Value

        for (i = 1; i < 10; ++i) {
            inFile >> val;
            sum += val;
            product *= val;
            diff -= val;
            quo /= val;
        }

        inFile >> instruct;

        if (instruct == "aav") {
            result = sum;
        }
        if (instruct == "mav") {
            result = product;
        }
        if (instruct == "avg") {
            result = sum / 10.0;
        }
        if (instruct == "dav") {
            result = quo;
        }
        if (instruct == "sav") {
            result = diff;
        }

        // Output
        if (!error) {
            cout << fixed << setprecision(2);
            cout << result << endl;
            outFile << result << endl;
        }
    }

    inFile.close();
    outFile.close();

    return 0;
}