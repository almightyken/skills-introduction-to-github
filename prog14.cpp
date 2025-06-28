/*
Author: Ken Mitchell
Assignment Title: Program 14 - Array Backwards
Assignment Description: Program an Array in reverse
Due Date: 6/27/2025
Date Created: 6/27/2025
Date Last Modified: 6/27/2025
*/
#include <iostream>
using namespace std;

int main() {
    // Data Abstraction
    int input;
    int i;
    int j;
    int sum = 0, max = 0, min = 0;
    int dup = 0;
    int count = 0;
    int numArray[2500];
    bool isDup[2500] = {false};

    // Input
    cout << "Input the number of elements to store in the array: ";
    cin >> input;
    cout << input << endl;
    cout << endl;
    cout << "Input  " << input << " integers:" << endl;

    // Process
    for (i = 0; i < input; ++i) {
        cin >> numArray[i];
        cout << "integer - " << i << " : " << numArray[i] << endl;

        sum += numArray[i];

        if (i == 0) {
            max = numArray[i];
            min = numArray[i];
        }

        if (numArray[i] > max) {
            max = numArray[i];
        }

        if (numArray[i] < min) {
            min = numArray[i];
        }
    }

    for (i = 0; i < input; ++i) {
        count = 1;
        if (isDup[i] == false){
            for (j = i + 1; j < input; ++j) {
                if (numArray[i] == numArray[j]) {
                    isDup[j] = true;
                    ++count;
                }
            }
            // how duplicate pairs are calculated with math
            dup += (count * (count - 1)) / 2;
        }
    }


    // Output
    cout << endl;

    cout << "The values stored into the array are : " << endl;
    for (i = 0; i < input; ++i) {
        cout << numArray[i] << " ";
    }

    cout << endl;
    cout << endl;

    cout << "The values stored into the array in reverse are : " << endl;
    for (i = input - 1; i >= 0; --i) {
        cout << numArray[i] << " ";
    }

    cout << endl;
    cout << endl;

    cout << "The sum of all elements of the array is " << sum << endl;
    cout << "The total number of duplicate elements in the array is "
    << dup << endl;
    cout << "The maximum and minimum element in the array are "
    << max << ", " << min << endl;

    return 0;
}
