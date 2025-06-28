/*
Author: Ken Mitchell
Assignment Title: Arithmetic Mean, Geometric Mean, Harmonic Mean & Standard
Deviation
Assignment Description: Write a program that can calculate the arithmetic,
geometric, and harmonic means and the standard deviation
Due Date: 6/13/2025
Date Created: 6/12/2025
Date Last Modified: 6/13/2025
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    // Data Abstraction
    int x1, x2, x3, x4, x5;
    int sum;
    double arithMean;
    double geoMean;
    double harmMean;
    double stdDev;
    double n = 5.0;

    // Input
    cin >> x1 >> x2 >> x3 >> x4 >> x5;

    // Process
    sum = x1 + x2 + x3 + x4 + x5;
    arithMean = (sum) / n;
    geoMean = pow((1.0*x1*x2*x3*x4*x5), (1/n));
    harmMean = n / ((1.0/x1) + (1.0/x2) + (1.0/x3) + (1.0/x4) + (1.0/x5));
    stdDev = sqrt((pow((x1-arithMean), 2) + pow((x2-arithMean), 2)
        + pow((x3-arithMean), 2) + pow((x4-arithMean), 2)
        + pow((x5-arithMean), 2)) / n);

    // Output
    cout << "Enter five numbers:" <<
        x1 << " " << x2 << " " << x3 << " " << x4
        << " " << x5 << endl;
    cout << endl;
    cout << "Result:" << endl;
    cout << endl;

    cout << fixed << setprecision(2);
    cout << "Arithmetic Mean    = " << arithMean << endl;
    cout << "Geometric Mean     = " << geoMean << endl;
    cout << "Harmonic Mean      = " << harmMean << endl;
    cout << "Standard Deviation = " << stdDev << endl;

    return 0;
}
