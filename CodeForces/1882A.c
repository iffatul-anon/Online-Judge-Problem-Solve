#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,a,x=1;
        scanf("%lld",&n);
        for(int i=0;i<n;i++){
            scanf("%lld",&a);
            if(a==x) x++;
            x++;
        }
        printf("%lld\n",x-1);
    }
}