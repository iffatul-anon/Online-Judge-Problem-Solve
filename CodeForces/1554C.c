#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,m,x=0,y=0,a[100]={0},b[100]={0},sum=0;
        scanf("%lld %lld",&n,&m);
        long long n1=n,m1=m;
        if(n>m) printf("0\n");
        else{
            while(n>0){
                a[x++]=n%2;
                n/=2;
            }
            while(m>0){
                b[y++]=m%2;
                m/=2;
            }
            for(int i=y-1;i>=0;i--){
                if(b[i]==1 && a[i]==0) sum+=pow(2,i);
                if(a[i]==1 && b[i]==0) break;
            }
            if((sum^n1)<=m1) {
                for(int i=0;i<=y;i++){
                    if(a[i]==0 && b[i]==1) sum-=pow(2,i);
                    if(a[i]==0 && b[i]==0) {
                        sum+=pow(2,i);
                        break;
                    }
                }
            }
            printf("%lld\n",sum);     
        }
    }
}