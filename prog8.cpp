/*
Author: Ken Mitchell
Assignment Title: Quadratic Formula
Assignment Description: Program roots and vertex
Due Date: 6/18/2025
Date Created: 6/18/2025
Date Last Modified: 6/18/2025
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    // Data Abstraction
    double a = 0;
    double b = 0;
    double c = 0;
    double r1 = 0, r2 = 0;
    double v1 = 0, v2 = 0;
    bool oneRoot = false;
    bool noRealRoots = false;
    double temp = 0;
    double discriminant = 0;
    // Input
    cout << "Please Enter A, B and C." << endl;
    cin >> a >> b >> c;

    // Process
    r1 = (-b + sqrt(pow(b,2) - (4*a*c))) / (2*a);
    r2 = (-b - sqrt(pow(b,2) - (4*a*c))) / (2*a);

    if (r1 > r2) {
        temp = r2;
        r2 = r1;
        r1 = temp;
    }

    v1 = -b / (2*a);
    v2 = (a * pow(v1, 2)) + (b*v1) + c;
    discriminant = pow(b, 2) - (4*a*c);

    if (discriminant == 0) {
        oneRoot = true;
    }
    if (discriminant < 0) {
        noRealRoots = true;
    }

    // Output
    cout << fixed << setprecision(2);
    if (oneRoot) {
        cout << r1 << "\t" << "(" << v1 << "," << v2 << ")";
    }
    else if (noRealRoots) {
        cout << "NO REAL ROOTS\t" << "(" << v1 << "," << v2 << ")";
    }
    else {
        cout << r1 << " " << r2 << "\t" << "(" << v1 << "," << v2 << ")";
    }

    return 0;
}
