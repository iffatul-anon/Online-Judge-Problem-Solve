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
        
    }
}  