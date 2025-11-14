#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Printing numbers from 1 to n
    for(i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    return 0;
}
