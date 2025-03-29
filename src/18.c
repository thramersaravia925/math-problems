#include <stdio.h>

int main() {
    int i, j;
    for (i = 0; i <= 15; ++i) {
        if ((i % 2 == 0) || (i % 3 == 0)) {
            printf("FizzBuzz\n");
        } else {
            printf("%d\n", i);
        }
    }
    return 0;
}
