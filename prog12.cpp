/*
Author: Ken Mitchell
Assignment Title: Caesar Cipher
Assignment Description: Encrypt or Decrypt a Message
Due Date: 6/25/2025
Date Created: 6/25/2025
Date Last Modified: 6/25/2025
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Data Abstraction
    ifstream inputFile;
    ofstream outputFile;
    string fileName, cipher;
    string line, fullMessage;
    int freqA = 0, freqE = 0, freqI = 0;
    int freqO = 0, freqU = 0, freqY = 0;
    char chr;
    string finalMessage;
    bool report = false;

    // Input
    cout << "Enter File Name: ";
    cin >> fileName;
    cout << fileName << endl;

    cout << "Enter encrypt or decrypt: ";
    cin >> cipher;
    cout << cipher << endl;

    // Process
    cout << endl;
    if (cipher != "encrypt" && cipher != "decrypt") {
        cout << "Error: Bad Command." << endl;
    }

    inputFile.open(fileName);
    outputFile.open("message");

    if (!inputFile) {
        cout << "Error: File did NOT open." << endl;
    }

    if (inputFile && cipher == "encrypt") {
        report = true;

        while(inputFile.get(chr)) {

            if (toupper(chr) == 'A') {
                freqA++;
            }
            if (toupper(chr) == 'E') {
                freqE++;
            }
            if (toupper(chr) == 'I') {
                freqI++;
            }
            if (toupper(chr) == 'O') {
                freqO++;
            }
            if (toupper(chr) == 'U') {
                freqU++;
            }
            if (toupper(chr) == 'Y') {
                freqY++;
            }

            chr = chr + 3;
            cout << chr;
            outputFile << chr;
        }
    }

    if (inputFile && cipher == "decrypt") {
        report = true;

        while(inputFile.get(chr)) {

            if (toupper(chr) == 'A') {
                freqA++;
            }
            if (toupper(chr) == 'E') {
                freqE++;
            }
            if (toupper(chr) == 'I') {
                freqI++;
            }
            if (toupper(chr) == 'O') {
                freqO++;
            }
            if (toupper(chr) == 'U') {
                freqU++;
            }
            if (toupper(chr) == 'Y') {
                freqY++;
            }

            chr = chr - 3;
            cout << chr;
            outputFile << chr;
        }
    }

    inputFile.close();
    outputFile.close();

    // Output
    if (report) {
        cout << endl;
        cout << endl;
        cout << "Letter Frequency" << endl;
        cout << "  A      " << freqA << endl;
        cout << "  E      " << freqE << endl;
        cout << "  I      " << freqI << endl;
        cout << "  O      " << freqO << endl;
        cout << "  U      " << freqU << endl;
        cout << "  Y      " << freqY << endl;
    }

    return 0;
}