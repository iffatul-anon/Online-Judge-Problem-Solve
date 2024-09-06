#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define int long long
signed main(){
    int n,sum=0,z;
    scanf("%lld",&n);
    char s[2];
    int a[n],b[n],x=0,y=0;
    for(int i=0;i<n;i++){
        scanf("%lld %s",&z,s);
        if(s[0]=='L') a[x++]=z;
        else b[y++]=z;
    }
    for(int i=1;i<x;i++) sum+=llabs(a[i]-a[i-1]);
    for(int i=1;i<y;i++) sum+=llabs(b[i]-b[i-1]);
    printf("%lld\n",sum);
}