// 13} Maximum and minimum in a array
// Sujith S 10-Oct-23
#include <stdio.h>
void findMaxMin(int arr[], int size, int *max, int *min) {
    int i;
	*max = arr[0];
    *min = arr[0];
    for (i = 1; i < size; i++) {
        if (arr[i] > *max)
            *max = arr[i];
        if (arr[i] < *min)
            *min = arr[i];
    }
}
int main() {
    int arr[100],i;
    int size;
    int max, min;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    for (i = 0; i < size; i++) {
    	printf("Enter the element %d :",i+1);
        scanf("%d", &arr[i]);
    }
    findMaxMin(arr, size, &max, &min);
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);
    return 0;
}

