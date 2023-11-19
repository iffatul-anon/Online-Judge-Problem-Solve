#include<stdio.h>
int main(){
    while(1){
        int n;
        scanf("%d",&n);
        if(n==0){
            return 0;
        }
        int flag=0,count=0;
        while(flag==0){
            count++;
            int a[n];
            flag=1;
            scanf("%d",&a[0]);
            for(int i=1;i<n;i++){
                scanf("%d",&a[i]);
                if(a[i]-a[i-1]!=1){
                    flag=0;
                }
            }
        }
        printf("%d\n",count);
    }
}