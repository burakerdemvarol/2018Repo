#include <iostream>
using namespace std;

int func1(int a =42, int b = 55){
    cout << "a = " << a;
    cout << ", b = " << b << endl;
    return a + b;
}

void func2(int a, int b){   // Pass by value
    a = 88;
    b = 99;
    cout << "a = " << a;
    cout << ", b = " << b << endl;
}

void func3(int &a, int &b){  // Pass by reference
    a = 12;
    b = 99;
    cout << "Values changed by function." << endl;
    cout << "a = " << a;
    cout << ", b = " << b << endl;
}

int main() {
    int a = 10;
    int b = 20;
    cout << "1.Parameter Default Values" << endl;   // default variables used by function C++ allows default parameters
    cout << "Result: " << func1() << endl;

    cout << "2.Variable Number of Actual Parameter" << endl;    // function has 2 parameter if no default parameter in function, user have to give 2 parameter for function
    cout << "Result: " << func1(1, 2) << endl;

    cout << "3.Keyword" << endl;    // first variable gives by user the other one is default parameter
    cout << "Result: " << func1(3) << endl;

    cout << "4.Positional" << endl; // swapped values a and b locations but result is same.
    cout << "Result : " << func1(2, 1) << endl;


    cout << "5.Combination" << endl;    // different combination of numbers used for parameters of function
    cout << "Result: " << func1(3+5, 5-3) << endl;

    cout << "6.Pass by Value" << endl;  // Pass by value global variables do not change just shallow copies change
    cout << "Result: ";
    func2(a, b);
    cout << "Global a and b values : " << a << ", " << b << endl;

    cout << "7.Pass by Reference"<< endl;   // Pass by reference variables addresses used by function no shallow copy
    cout << "Result: ";
    func3(a, b);
    cout << "Global values of a and b changed: " << a << ", " << b << endl;

    return 0;
}