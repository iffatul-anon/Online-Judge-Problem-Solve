#include<stdio.h>
int main(){
    long long int t,a,b,c;
    scanf("%lld",&t);
    for(int i=1;i<=t;i++){
        scanf("%lld %lld %lld",&a,&b,&c);
        if((a*a+b*b==c*c) || (a*a+c*c==b*b) || (b*b+c*c==a*a)){
            printf("Case %d: yes\n",i);
        }
        else{
            printf("Case %d: no\n",i);
        }
    }
    return 0;
}