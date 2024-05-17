// 7} Find the sum of squares of first n natural numbers
// Sujith S 25-Sept-23
#include <stdio.h>

int sum_of_squares(int n) {
    if (n == 0) {
        return 0;
    }
    else {
        return (n * n) + sum_of_squares(n - 1);
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Sum of squares of first %d Natural Numbers is: %d\n", n, sum_of_squares(n));

    return 0;
}

