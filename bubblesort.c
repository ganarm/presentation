#include <stdio.h>

int main() {
    int n;
    
    // Take number of elements as input
    printf("\n Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n]; // Declare an array of size n

    // Take elements of the array as input
    printf("\n Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    printf("\n Sorted array in ascending order: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    
    return 0;
}
