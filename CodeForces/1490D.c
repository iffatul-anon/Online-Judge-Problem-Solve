#include<stdio.h>

int b[1000],count=0;

void Search(int a[],int low,int high){
    if(low>high) return;
    int max=0,flag=low;
    for(int i=low;i<=high;i++){
        if(max<a[i]){ 
            max=a[i];
            flag=i;
        }
    }
    b[flag]=count++;
    Search(a,low,flag-1);
    Search(a,flag+1,high);
    count--;
}

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        count=0;
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            b[i]=0;
        }
        Search(a,0,n-1);
        for(int i=0;i<n;i++) printf("%d ",b[i]);
        printf("\n");
    }
}