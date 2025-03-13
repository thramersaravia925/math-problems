#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int a = 5;
    int b = 10;
    int c = 2;

    // Use the formula to find the value of x
    double x = (sqrt(b) - sqrt(a)) / c;

    printf("The value of x is: %f\n", x);

    return 0;
}
