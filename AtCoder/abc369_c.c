#include<stdio.h>
#define int long long
signed main(){
    int n,c=1,sum=0,d;
    scanf("%lld",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%lld",&a[i]);
    if(n==1){
        printf("1\n");
        return 0;
    }
    d=a[1]-a[0];
    for(int i=1;i<n;i++){
        if(a[i]-a[i-1]==d) c++;
        else{
            sum+=((c*(c+1))/2)-c;
            d=a[i]-a[i-1];
            c=2;
        }
    }
    sum+=((c*(c+1))/2)-c;
    printf("%lld\n",sum+n);
}