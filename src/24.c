#include <stdio.h>

int main() {
    int i;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    for (i = 1; i <= n; ++i) {
        if (i % 2 == 0)
            printf("*\n");
        else
            printf("%c\n", '0' + (i & 1));
    }

    return 0;
}
