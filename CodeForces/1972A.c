#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,c=0,x=0;
        scanf("%lld",&n);
        long long a[n],b[n];
        for(int i=0;i<n;i++) scanf("%lld",&a[i]);
        for(int i=0;i<n;i++) scanf("%lld",&b[i]);
        for(int i=0;i<n;i++){
            if(a[x++]>b[i]) {
                c++;
                x--;
            }
        }
        printf("%lld\n",c);
    }
}