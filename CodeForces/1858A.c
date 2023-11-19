#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long a,b,c;
        scanf("%lld %lld %lld",&a,&b,&c);
        a+=c/2;
        b+=c/2;
        if(c%2==1) a++;
        if(a>b) printf("First\n");
        else printf("Second\n");
    }
}