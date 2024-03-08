#include<iostream>
#include<algorithm>
using namespace std;
long long a[10000005]={0}, p[10000005],ind=0;
void sieve(){
    long long i,j,x,y;
    p[ind++]=2;
    for(i=3;i<=10000005;i+=2){
        if(a[i]==0){
            p[ind++]=i;
            if(i*i>10000005) continue;
            for(j=i*i;j<=10000005;j+=2*i){
                a[j]=1;
            }
        }
    }
}
int main(){
    sieve();
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x,y;
        scanf("%d",&n);
        if(n==2) printf("1\n");
        else if(n==3) printf("2\n");
        else{
            x=upper_bound(p,p+ind,n/2)-p;
            y=upper_bound(p,p+ind,n)-p;
            if(x==y) printf("1\n");
            else printf("%d\n",y-x+1);
        }
    }
}  