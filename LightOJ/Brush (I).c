#include<stdio.h>
int main(){
    int t,n,x;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d",&n);
        int sum=0;
        for(int j=0;j<n;j++){
            scanf("%d",&x);
            if(x>0){
                sum=sum+x;
            }
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}