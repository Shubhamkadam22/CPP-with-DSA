#include <iostream>
using namespace std;

int main() {
    short smallNum = 120;
    long bigNum = 123456789;
    long long veryBigNum = 9876543210LL;
    unsigned int positiveOnly = 300;
    signed int bothSigns = -45;
    unsigned short smallPositive = 50000;

    cout << "short: " << smallNum << endl;
    cout << "long: " << bigNum << endl;
    cout << "long long: " << veryBigNum << endl;
    cout << "unsigned int: " << positiveOnly << endl;
    cout << "signed int: " << bothSigns << endl;
    cout << "unsigned short: " << smallPositive << endl;

    return 0;
}