// 9}  Function to calculate first N Lucas numbers 2,1,3,4,7
// Sujith S 29-Sept-23
#include <stdio.h>
int lucas(int n) {
    if (n == 0)
        return 2;
    if (n == 1)
        return 1;
    return lucas(n - 1) + lucas(n - 2);
}

int main() {
    int n,i;
    printf("Enter the number of Lucas numbers to print: ");
    scanf("%d", &n);

    printf("The first %d Lucas Numbers are:\n", n);
    for (i = 0; i < n; i++) {
        printf("%d ", lucas(i));
    }
    printf("\n");

    return 0;
}    

