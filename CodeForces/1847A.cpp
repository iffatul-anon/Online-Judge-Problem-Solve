#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k,sum=0;
        scanf("%d %d",&n,&k);
        int a[n],b[n];
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        for(int i=0;i<n-1;i++) b[i]=abs(a[i]-a[i+1]);
        n--;
        k--;
        sort(b,b+n);
        for(int i=0;i<n-k;i++) sum+=b[i];
        printf("%d\n",sum);
    }
}