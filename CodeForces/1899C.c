#include<stdio.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,sum=0,max=-10000;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++) {
            scanf("%d",&a[i]);
            if(a[i]>max) max=a[i];
        }
        if(max<=0) printf("%d\n",max);
        else{
            if(a[0]>0) sum=a[0];
            for(int i=1;i<n;i++){
                if((abs(a[i])%2)==(abs(a[i-1])%2)) sum=a[i];
                else sum+=a[i];
                if(sum<0) sum=0;
                else if(sum>max) max=sum;
            }
            printf("%d\n",max);
        }
    }
}