#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int a = rand() % 100;
    int b = rand() % 100;
    int c = a + b;
    printf("%d + %d = %d", a, b, c);
    return 0;
}
