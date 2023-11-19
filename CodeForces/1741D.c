#include <stdio.h>

int t,n,count=0,flag=0;

void merge(int a[], int low, int mid, int high){
    if(a[mid]>a[mid+1]) count++;
    int i = low;     
    int j = mid + 1; 
    int k = low;     
    int b[high + 1];
    while (i <= mid && j <= high){
        if (a[i] <= a[j]) b[k++] = a[i++];
        else b[k++] = a[j++];
    }
    while (i <= mid) b[k++] = a[i++];
    while (j <= high) b[k++] = a[j++];
    for (k = low; k <= high; k++) a[k] = b[k];
    return;
}

void Msort(int a[], int low, int high){
    if (low < high){
        int mid = low + (high - low) / 2;
        Msort(a, low, mid);      
        Msort(a, mid + 1, high);
        merge(a, low, mid, high); 
        if(a[high]-a[low]!=high-low) flag=1;
    }
    return;
}

int main(){
    scanf("%d", &t);
    while (t--){
        count=0;
        flag=0;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);
        Msort(a, 0, n - 1);
        if(flag==1) printf("-1\n");
        else printf("%d\n",count);
    }
    return 0;
}