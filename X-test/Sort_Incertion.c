#include<stdio.h>

int main(){

    int a[]={79,65,21,81,12,1};
    int n=sizeof(a)/sizeof(a[0]);

    printf("Unsorted Array: ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n\n");

    for(int i=1;i<n;i++){
        int key=a[i];
        int j=i-1;
        while(key<a[j] && j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }

    printf("Sorted Array: ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n\n");

    return 0;
}