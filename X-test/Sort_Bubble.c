#include <stdio.h>
#include <stdlib.h>
#include<time.h>
void bubbleSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
int main() {
    int size;
    scanf("%d",&size);
    int array[size];
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    bubbleSort(array, size);
    for(int i=0;i<size;i++){
        printf("%d ",array[i]);
    }
}