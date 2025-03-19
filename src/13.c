#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int x = rand() % 10 + 1;
    int y = rand() % 10 + 1;
    printf("What is %d x %d?\n", x, y);
    return 0;
}
