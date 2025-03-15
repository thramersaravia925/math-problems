#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int num1 = rand() % 10 + 1;
    int num2 = rand() % 10 + 1;
    int result = num1 * num2;
    printf("%d x %d = ", num1, num2);
    scanf("%d", &result);
    if (result == num1 * num2) {
        printf("Correct!\n");
    } else {
        printf("Incorrect. The correct answer is %d.\n", num1 * num2);
    }
    return 0;
}
