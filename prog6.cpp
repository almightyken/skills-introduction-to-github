/*
Author: Ken Mitchell
Assignment Title: Min, Max, and Median
Assignment Description: Write a program that can calculate the arithmetic,
geometric, and harmonic means and the standard deviation
Due Date: 6/16/2025
Date Created: 6/15/2025
Date Last Modified: 6/15/2025
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Data Abstraction
    double min = 0.0;
    double max = 0.0;
    double temp;
    double median = 0.0;
    double x1, x2, x3, x4, x5;
    double y1 = 0.0, y2 = 0.0, y3 = 0.0, y4 = 0.0, y5 = 0.0;

    // Input
    cin >> x1 >> x2 >> x3 >> x4 >> x5;

    // Process

    y1 = x1;
    y2 = x2;
    y3 = x3;
    y4 = x4;
    y5 = x5;

    if (y1 > y2) {
        temp = y1;
        y1 = y2;
        y2 = temp;
    }
    if (y1 > y3) {
        temp = y1;
        y1 = y3;
        y3 = temp;
    }
    if (y1 > y4) {
        temp = y1;
        y1 = y4;
        y4 = temp;
    }
    if (y1 > y5) {
        temp = y1;
        y1 = y5;
        y5 = temp;
    }

    if (y2 > y3) {
        temp = y2;
        y2 = y3;
        y3 = temp;
    }
    if (y2 > y4) {
        temp = y2;
        y2 = y4;
        y4 = temp;
    }
    if (y2 > y5) {
        temp = y2;
        y2 = y5;
        y5 = temp;
    }

    if (y3 > y4) {
        temp = y3;
        y3 = y4;
        y4 = temp;
    }
    if (y3 > y5) {
        temp = y3;
        y3 = y5;
        y5 = temp;
    }

    if (y4 > y5) {
        temp = y4;
        y4 = y5;
        y5 = temp;
    }

    max = y5;
    min = y1;
    median = y3;

    // Output

    cout << x1 << " " << x2
    << " " << x3 << " " << x4 << " " << x5 << endl;
    cout << endl;
    cout << "Min    = " << min << endl;
    cout << "Max    = " << max << endl;
    cout << "Median = " << median << endl;
}
