#include<iostream>
#include<algorithm>
using namespace std;
long long a[1000005]={0}, p[1000005],ind=0;
void sieve(){
    long long i,j,x,y;
    p[ind++]=2*2;
    for(i=3;i<=1000005;i+=2){
        if(a[i]==0){
            p[ind++]=i*i;
            if(i*i>1000005) continue;
            for(j=i*i;j<=1000005;j+=2*i){
                a[j]=1;
            }
        }
    }
}
int main(){
    sieve();
    long long n,x,y,T[100000];
    p[0]=4;
    scanf("%lld",&n);
    for(int i=0;i<n;i++){
        scanf("%lld",&x);
        y=lower_bound(p,p+ind,x)-p;
        y=p[y];
        if(x==y) printf("YES\n");
        else printf("NO\n");
    }
}  