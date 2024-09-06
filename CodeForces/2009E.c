#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,k,mn=0,a,b,c;
        scanf("%lld %lld",&n,&k);
        a=(k*(k-1))/2;
        b=((n+k)*(n+k-1))/2;
        c=b-a;
        mn=b-a;
        int l=k,r=n+k-1,x,y,c1=0,c2=0;
        while(l<r){
            int mid=(l+r)/2;
            c=(mid*(mid+1))/2;
            x=c-a;
            y=b-c;
            if(llabs(x-y)<mn) mn=llabs(x-y);
            if(x<y){
                if(l==mid) l=mid+1;
                else l=mid;
            }
            else{
                if(r==mid) r=mid-1;
                else r=mid;
            }
        }
        printf("%lld\n",mn);
    }
}