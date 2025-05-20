#include <stdio.h>

int main() {
    int i;
    int *ptr;

    ptr = &i;
    printf("%d\n", *ptr);

    return 0;
}
