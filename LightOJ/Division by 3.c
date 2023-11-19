#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        long long int a,b,x,y,z;
        scanf("%lld %lld",&a,&b);
        x=(a/3);
        y=b/3;
        z=(y-x)*2;
        if(a%3==0){
            z++;
        }
        if(b%3==2){
            z++;
        }
        printf("Case %d: %lld\n",i,z);
    }
}