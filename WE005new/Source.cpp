#include <stdio.h>
int main() {
    int n, i;
    int fact = 1;
    printf("Enter an your factorial: ");
    scanf_s("%d", &n);
    if (n < 0)
        printf("Error!");
    else {
        for (i = 1; i <= n; ++i) {
            fact = fact * i;
        }
        printf("Factorial of %d = %d", n, fact);
    }

    return 0;
}