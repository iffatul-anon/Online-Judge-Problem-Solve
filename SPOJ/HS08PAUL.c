#include<stdio.h>
long long a[10000005]={0}, aaa[10000005]={0};
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
    long long t,n,x,i,j;
    scanf("%lld",&t);
    for(i=1;i<=4000;i++){
        for(j=1;j<=60;j++){
            x=(i*i)+(j*j*j*j);
            if(x>10000005) break;
            if(a[x]==0) aaa[x]=1;
        }
    }
    aaa[0]=0;
    for(int i=1;i<10000005;i++) aaa[i]=aaa[i]+aaa[i-1];
    while(t--){
        scanf("%lld",&n);
        printf("%lld\n",aaa[n]);
    }
} 