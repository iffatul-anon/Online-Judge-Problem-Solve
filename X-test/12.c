#include<stdio.h>
long long a[100000005]={0}, p[100000005],ind=0;
void sieve(){
    long long i,j,x,y;
    p[ind++]=2;
    for(i=3;i<=100000005;i+=2){
        if(a[i]==0){
            p[ind++]=i;
            if(i*i>100000005) continue;
            for(j=i*i;j<=100000005;j+=2*i){
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