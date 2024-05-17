// 18} Standard Deviation of array
// Sujith S 31-Oct-23
#include <stdio.h>
#include <math.h>
double calculateMean(int arr[], int n) {
    int sum = 0,i;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (double)sum / n;
}
double calculateStandardDeviation(int arr[], int n) {
    double mean = calculateMean(arr, n);
    double sumOfSquaredDifferences = 0;
    int i;
    for (i = 0; i < n; i++) {
        sumOfSquaredDifferences += pow(arr[i] - mean, 2);
    }
    double standardDeviation = sqrt(sumOfSquaredDifferences / n);
    return standardDeviation;
}
int main() {
    int arr[100]; 
    int n,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
    	printf("Enter the element %d :",i+1);
        scanf("%d", &arr[i]);
    }
    double stdDev = calculateStandardDeviation(arr, n);
    printf("Standard deviation of the array: %.2f\n", stdDev);
    return 0;
}

