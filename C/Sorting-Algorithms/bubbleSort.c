#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n,i,j;
    //data input
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int v[n];
    for(i=0;i<n;i++){
        printf("Enter element [%d] of the array: ", i);
        scanf("%d", &v[i]);
    }
    //bubble sort
    for(i=0;i<n-1;i++){ //number of passes that will be executed
        bool change = false; //variable to check if a swap happened, starts as false since no swaps occurred yet
        for(j=0;j<n-1-i;j++){ //loop that performs the comparison and swaps elements in order
            if(v[j] > v[j+1]){ //checks if the left element is greater than the right one
                int temp = v[j]; //temporary variable that stores the smaller value
                v[j] = v[j+1];   //assigns the larger value to the previous position
                v[j+1] = temp;   //assigns the smaller value to the next position using the temporary variable
                change = true;    //marks that a swap occurred, allowing the loop to continue to another pass
            }
        }
        if(change == false){ //if no swap happened at all, troca stays false as initialized, and the loop breaks
            break; //this means the loop ends early because the array is already sorted
        }
    }
    //output
    printf("\nArray sorted in ascending order: ");
    for(i=0;i<n;i++){
        printf("%d ", v[i]);
    }
}
