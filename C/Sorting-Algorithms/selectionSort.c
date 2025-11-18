#include <stdio.h>

int main() {

    int i, j, n;
    // Ask the user for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int v[n]; // Declare the array with n elements
    // Read all elements from the user
    for(i = 0; i < n; i++){
        printf("Enter element [%d] of the array: ", i);
        scanf("%d", &v[i]);//[2,5,1,4]
    }
    for(i = 0; i < n - 1; i++){
        int smallest = v[i]; // Assume the current element is the smallest
        int minIndex = i;         // Store its index
        // Inner loop: search for a smaller element in the rest of the array
        for(j = i + 1; j < n; j++){
            // If a smaller value is found, update 'smallest' and 'pos'
            if(v[j] < smallest){
                smallest = v[j];
                minIndex = j;
            }
        }
        // Swap the current element with the actual smallest found
        int temp = v[i];
        v[i] = v[minIndex];
        v[minIndex] = temp;
    }
    // Print the sorted array
    printf("Sorted array: ");
    for(i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
}
