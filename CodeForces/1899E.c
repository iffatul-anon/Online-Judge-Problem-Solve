#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,min=1000000000,f;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++) {
            scanf("%d",&a[i]);
            if(a[i]<min) min=a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]==min){
                f=i;
                break;
            }
        }
        for(int i=f+1;i<n;i++){
            if(a[i-1]>a[i]){
                f=-1;
                break;
            }
        }
        printf("%d\n",f);
    }
}