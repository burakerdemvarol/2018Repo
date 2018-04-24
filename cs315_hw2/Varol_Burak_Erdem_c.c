#include <stdio.h>

int func1(int a, int b){
    printf("a = %d", a);
    printf(", b = %d", b);
    return a + b;
}

void func2(int a, int b){
    a = 88;
    b = 99;
    printf("a = %d ", a);
    printf(", b = %d", b);
}

void func3(int *a, int *b){
    *a = 12;
    *b = 99;
    printf("Values changed by function.\n");
    printf("a = %d", *a);
    printf(", b = %d", *b);
}

int main() {
    int a = 10;
    int b = 20;
    printf("1.Parameter Default Values\n");   // C does not support default values!
    printf(", Result: %d\n", func1(a, b));

    printf("2.Variable Number of Actual Parameter\n"); // same number of values give for function
    printf(", Result: %d\n", func1(1, 2));

    printf ("3.Keyword\n");   // order is not important if you give name of the variable and values
    printf (", Result: %d\n", func1(b = 3, a = 4));

    printf ("4.Positional\n");    // swapped values a and b locations but result is same. fist position for first parameter, second position for second parameter.
    printf (", Result : %d\n", func1(2, 1));

    printf ("5.Combination\n");    // different combination of numbers used for parameters of function
    printf (", Result: %d\n", func1(3+5, 5-3));

    printf ("6.Pass by Value\n");  // Pass by value global variables do not change just shallow copies change
    printf ("Result: ");
    func2(a, b);
    printf("\n");
    printf ("Global a and b values : %d , %d\n", a, b);

    printf ("7.Pass by Reference\n");   // Pass by reference variables addresses used by function no shallow copy
    printf ("Result: ");
    func3(&a, &b);
    printf("\n");
    printf ("Global values of a and b changed: %d , %d\n", a, b);

    return 0;
}