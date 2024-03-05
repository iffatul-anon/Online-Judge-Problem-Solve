#include<stdio.h>
long long a[1000005]={0}, p[1000005],ind=0;
void sieve(){
    p[ind++]=2;
    for(long long i=3;i<=1000005;i+=2){
        if(a[i]==0){
            p[ind++]=i;
            if(i*i>1000005) continue;
            for(long long j=i*i;j<=1000005;j+=2*i){
                a[j]=1;
            }
        }
    }
}
int main(){
    sieve();
    int a,b,n,div,c=0,x,d=0;
    scanf("%d %d %d",&a,&b,&n);
    for(int i=a;i<=b;i++){
        div=1;
        x=i;
        for(int j=0;p[j]*p[j]<=i;j++){
            c=0;
            while(x%p[j]==0){
                c++;
                x/=p[j];
            }
            if(c>0) div*=c+1;
        }
        if(x>1) div*=2;
        if(div==n) d++;
    }
    printf("%d\n",d);
}