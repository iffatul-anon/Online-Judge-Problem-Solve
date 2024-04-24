#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[200]={0},x,sum=0;
        for(int i=0;i<n;i++){
            scanf("%d",&x);
            a[x]++;
        }
        for(int i=0;i<110;i++) sum+=(a[i]/3);
        printf("%d\n",sum);
    }   
}