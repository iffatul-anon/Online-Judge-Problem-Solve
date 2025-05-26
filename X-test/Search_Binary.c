#include <stdio.h>
#include <stdlib.h>
int binarySearch(int array[], int low, int high, int element) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (array[mid] == element) {
            return mid;
        }
        if (array[mid] < element) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int size,element;
    scanf("%d",&size);
    int array[size];
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    scanf("%d",&element);

    int binary_result = binarySearch(array, 0, size-1, element);
    
    if(binary_result==-1){
        printf("Element not found\n");
    }
    else{
        printf("Element found at index: %d\n", binary_result+1);
    }
    return 0;
}