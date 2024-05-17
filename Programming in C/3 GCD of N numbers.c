// 3} Function to find GCD of array of numbers recursively
// Sujith S 16-Sept-23
#include <stdio.h>
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int findGCDRecursive(int arr[], int n) {
    if (n == 1)
        return arr[0];
    return gcd(arr[n - 1], findGCDRecursive(arr, n - 1));
}
int main() {
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++) {
    	   printf("Enter element %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("GCD of the given numbers is: %d\n", findGCDRecursive(arr, n));
    return 0;
}

