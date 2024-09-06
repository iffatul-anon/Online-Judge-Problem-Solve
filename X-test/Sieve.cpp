#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
const long long int N = 1e6+10;
long long a[N]={0}, p[N],ind=0;
void sieve(){
    p[ind++]=2;
    for(long long i=3;i<=N;i+=2){
        if(a[i]==0){
            p[ind++]=i;
            if(i*i>N) continue;
            for(long long j=i*i;j<=N;j+=2*i){
                a[j]=1;
            }
        }
    }
}
int main(){
    sieve();
    
}