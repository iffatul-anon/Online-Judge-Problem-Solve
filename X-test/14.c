#include<stdio.h>
long long GCD(long long n1, long long n2) {
    return n2==0 ? n1 : GCD(n2,n1%n2);
}
long long a[1005]={0}, p[1005],ind=0;
void sieve(){
    p[ind++]=2;
    for(long long i=3;i<=1005;i+=2){
        if(a[i]==0){
            p[ind++]=i;
            if(i*i>1005) continue;
            for(long long j=i*i;j<=1005;j+=2*i){
                a[j]=1;
            }
        }
    }
}
int main(){
    sieve();
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        
    }
}