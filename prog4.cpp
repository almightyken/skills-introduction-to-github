/*
Author: Ken Mitchell
 Assignment Title: Approximate PI
 Assignment Description: Write a program for the pi equation
 Due Date: 6/11/2025
 Date Created: 6/11/2025
 Date Last Modified: 6/11/2025
 */

#include <iostream>

using namespace std;

int main() {
    // Data Abstraction
    int sum = 0;
    int x = 0;
    int input = 0;

    // Input
    cin >> x;
    input = x;

    // Process
    sum += x % 10;
    x /= 10;
    sum += x % 10;
    x /= 10;
    sum += x % 10;
    x /= 10;
    sum += x % 10;
    x /= 10;
    sum += x % 10;
    x /= 10;
    sum += x % 10;
    x /= 10;
    sum += x % 10;
    x /= 10;


    // Output

    cout << "Enter an integer between 0 and 9999999: " <<  input << endl;
    cout << "The sum of the digits is " << sum << "." << endl;
    return 0;
}