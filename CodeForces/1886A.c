#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,z=0;
        scanf("%lld",&n);
        z=n-3;
        if(z%3!=0 && z>3) printf("YES\n1 2 %lld\n",z);
        else if(z-2>4) printf("YES\n1 4 %lld\n",z-2);
        else printf("NO\n");
    }
}