
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int a = rand() % 10 + 1;
    int b = rand() % 10 + 1;
    int c = rand() % 10 + 1;
    int d = rand() % 10 + 1;
    int e = rand() % 10 + 1;

    printf("Please solve the following math problem:\n");
    printf("%d x %d - %d x %d + %d = ", a, b, c, d, e);

    scanf("%d", &x);

    if (x == a * b - c * d + e) {
        printf("Correct!\n");
    } else {
        printf("Incorrect. The correct answer is %d.\n", a * b - c * d + e);
    }

    return 0;
}