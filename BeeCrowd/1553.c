#include<stdio.h>
int main(){
    while(1){
        int n,k;
        scanf("%d %d",&n,&k);
        if(n==0){
            return 0;
        }
        int count=0;
        int a[101]={0};
        for(int i=0;i<n;i++){
            int p;
            scanf("%d",&p);
            a[p]++;
        }
        for(int i=0;i<101;i++){
            if(a[i]>=k){
                count++;
            }
        }
        printf("%d\n",count);
    }
}