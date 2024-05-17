// 8}  Find the sum of cubes of first n natural numbers
// Sujith S 26-Sept-23
#include <stdio.h>
int sumOfCubes(int n) {
    if (n == 0) {
        return 0;
    } else {
        return (n * n * n) + sumOfCubes(n - 1);
    }
}
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Sum of cubes of first %d Natural Numbers is: %d\n", n, sumOfCubes(n));
    return 0;
}

