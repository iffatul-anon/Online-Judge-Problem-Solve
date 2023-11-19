#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,n2,h,x;
        scanf("%lld %lld",&n,&h);
        n2=n;
        long long a[n],b[n];
        b[0]=0;
        for(int i=0;i<n;i++){
            scanf("%lld",&a[i]);
            if(i!=0) b[i]=a[i]-a[i-1];
        }
        sort(b,b+n);
        if(h%n==0) x=h/n;
        else x=h/n+1;
        for(int i=1;i<n2;i++){
            if(b[i]<x){
                h-=b[i];
                n--;
                if(h%n==0) x=h/n;
                else x=h/n+1;
            }
            else{
                h-=x;
                n--;
            }
        }
        printf("%lld\n",x);
    }
}