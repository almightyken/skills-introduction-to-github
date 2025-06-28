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

    double pi1;
    double pi2;
    double one = 1.0;

    double oneThird = one/3;
    double oneFifth = one/5;
    double oneSeventh = one/7;
    double oneNinth = one/9;
    double oneEleventh = one/11;
    double oneThirteenth = one/13;

    pi1 = 4 * (1 - oneThird + oneFifth - oneSeventh + oneNinth - oneEleventh);
    pi2 = 4 * (1 - oneThird + oneFifth - oneSeventh +
        oneNinth - oneEleventh + oneThirteenth);

    cout << "PI = " << pi1 << endl;
    cout << "PI = " << pi2 << endl;

    return 0;
}
