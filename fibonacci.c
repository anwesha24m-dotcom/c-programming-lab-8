#include <stdio.h>

int main(void) {
    int n;

    printf("Enter the number of terms (n > 0): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. n must be a positive integer.\n");
        return 1;
    }

    unsigned long long a = 0, b = 1, next;
    int i = 1;

    printf("First %d term(s) of the Fibonacci series:\n", n);
    while (i <= n) {
        printf("%llu ", a);
        next = a + b;
        a = b;
        b = next;
        i++;
    }
    printf("\n");

    return 0;
}
