#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        long long int n,count=0;
        scanf("%lld",&n);
        while(n>0){
            if(n%2==1){
                count++;
            }
            n=n/2;
        }
        if(count%2==0){
            printf("Case %d: even\n",i);
        }
        else{
            printf("Case %d: odd\n",i);
        }
    }
    return 0;
}