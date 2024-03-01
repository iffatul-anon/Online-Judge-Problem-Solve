#include<stdio.h>
long long a[10000005]={0};
void sieve(){
    long long i,j,x,y;
    a[0]=a[1]=1;
    for(i=2;i*i<=10000005;i++){
        if(a[i]==0){
            for(j=i*i;j<=10000005;j+=i){
                a[j]=1;
            }
        }
    }
}
int main(){
    sieve();
    
} 