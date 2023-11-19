#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        long long int w,n,m,flag=0;
        scanf("%lld",&w);
        if(w%2!=0){
            printf("Case %d: Impossible\n",i);
        }
        else{
            for(m=2;m<=w/3;m=m+2){
                n=w/m;
                if(w%m==0 && n%2!=0){
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                printf("Case %d: %lld %lld\n",i,n,m);
            }
            else{
                printf("Case %d: Impossible\n",i);
            }
        }
    }
    return 0;
}