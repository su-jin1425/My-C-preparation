// 6} Find the sum of first n natural numbers
// Sujith S 23-Sept-23
#include <stdio.h>

int sumOfNaturals(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + sumOfNaturals(n - 1);
    }
}
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int sum = sumOfNaturals(n);
    printf("Sum of first %d Natural Numbers is: %d\n", n, sum);
    return 0;
}


