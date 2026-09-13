#include <iostream>
using namespace std;

void updateValues(int val, int &ref) {
    val = 100;
    ref = 200;
}

int main() {
    int basicInt = 10;
    float basicFloat = 5.5f;
    double basicDouble = 99.99;
    char basicChar = 'A';
    bool basicBool = true;

    short smallNum = 100;
    long bigNum = 100000L;
    long long veryBigNum = 10000000000LL;
    signed int signedNum = -50;
    unsigned int positiveNum = 50;

    int x = 10;
    int* p = &x;
    int* nullPtr = nullptr;

    int original = 25;
    int &refVar = original;

    cout << basicInt << " " << basicFloat << " " << basicDouble << " " << basicChar << " " << basicBool << endl;
    cout << smallNum << " " << bigNum << " " << veryBigNum << " " << signedNum << " " << positiveNum << endl;
    
    cout << "Address of x: " << &x << endl;
    cout << "Pointer p holds address: " << p << endl;
    cout << "Value via dereference: " << *p << endl;

    *p = 15;
    cout << "New value of x: " << x << endl;

    refVar = 30;
    cout << "Updated original via reference: " << original << endl;

    int num1 = 1, num2 = 2;
    updateValues(num1, num2);
    cout << "Passed by value: " << num1 << endl;
    cout << "Passed by reference: " << num2 << endl;

    if (nullPtr == nullptr) {
        cout << "Pointer is null" << endl;
    }

    return 0;
}