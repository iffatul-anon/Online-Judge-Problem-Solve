#include<stdio.h>
#include<stdlib.h>
#define int long long
signed main() {
    int n,sum=0;
    scanf("%lld",&n);
    int a[n],b[n],x=0,z=0,c[n];
    for(int i=0;i<n;i++) scanf("%lld",&a[i]);
    b[x++]=a[0];
    for(int i=1;i<n;i++){
        if(a[i]==b[x-1]) continue;
        b[x++]=a[i];
    }
    c[z++]=b[0];
    for(int i=1;i<x;i++){
        if(i==x-1 || (b[i-1]<b[i] && b[i]>b[i+1]) || (b[i-1]>b[i] && b[i]<b[i+1])){
            c[z++]=b[i];
        }
    }
    if(z==1){
        printf("0\n");
        return 0;
    }
    else if(z==2){
        printf("%lld\n",llabs(c[0]-c[1]));
        return 0;
    }
    int f1;
    if(c[0]<c[1]){
        f1=1;
    }
    else{
        sum+=c[0]-c[1];
        c[1]=c[0];
        f1=2;
    }
    for(int i=f1;i<z;i+=2){
        if(i==z-1){
            if(c[i]>c[i-1]){
                sum+=c[i]-c[i-1];
            }
        }
        else if(c[i-1]<c[i] && c[i]>c[i+1]){
            sum+=(c[i]-c[i-1])+(c[i]-c[i+1]);
            c[i+1]=c[i];
        }
        else{
            sum+=(c[i]-c[i+1]);
            c[i+1]=c[i-1];
        }
    }
    printf("%lld\n",sum);
}