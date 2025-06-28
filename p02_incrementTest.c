#include<stdio.h>

int main(){
    int a=5;
    a = a++ + ++a;
    printf("%d\n", a); // Output will be 12 due to the order of operations

    /*
    Reasoning:
    1. `a++` returns the current value of `a` (5) and then increments `a` to 6.
    2. `++a` increments `a` to 7 and then returns the new value (7).
    3. The expression becomes `5 + 7`, which equals 12.
    4. Finally, `a` is updated to 12.
    */

    return 0;
}