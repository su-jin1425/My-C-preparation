// 5} closed formula to find nth term in pell numbers
// Sujith S 21-Sept-23
#include <stdio.h>
#include <math.h>
int pell(int n) {
    double sqrt2 = sqrt(2);
    double n1 = pow(1 + sqrt(2), n);
    double n2 = pow(1 - sqrt(2), n);
    double r = (n1 - n2) / (2 * sqrt(2));
    return (float)r;
}
int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    printf("%d",pell(n-1));
    return 0;
}

