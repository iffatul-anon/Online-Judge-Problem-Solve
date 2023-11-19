#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        long long int s,n,x,y;
        scanf("%lld",&s);
        n=sqrt(s);
        if(n*n!=s){
            n++;
        }
        x=pow(n,2);
        y=pow(n-1,2);
        if(n%2==0){
            if(s-y<n){
                printf("Case %d: %lld %lld\n",i,s-y,n);
            }
            else if(s-y>n){
                printf("Case %d: %lld %lld\n",i,n,x-s+1);
            }
            else{
                printf("Case %d: %lld %lld\n",i,n,n);
            }
        }
        else{
            if(s-y>n){
                printf("Case %d: %lld %lld\n",i,x-s+1,n);
            }
            else if(s-y<n){
                printf("Case %d: %lld %lld\n",i,n,s-y);
            }
            else{
                printf("Case %d: %lld %lld\n",i,n,n);
            }
        }
    }
    return 0;
}