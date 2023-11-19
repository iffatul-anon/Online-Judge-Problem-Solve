#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,m,h,anon1,anon2,count=0;
        scanf("%lld %lld %lld",&n,&m,&h);
        for(int i=0;i<n;i++){
            long long b[m],sum=0,sum2=0,j;
            for(j=0;j<m;j++) scanf("%lld",&b[j]);
            sort(b,b+m);
            for(j=0;j<m;j++){
                sum+=b[j];
                sum2+=sum;
                if(sum>h){
                    sum2-=sum;
                    break;
                }
            }
            if(i==0){
                anon1=j;
                anon2=sum2;
            }
            if(anon1<j || (anon1==j && anon2>sum2)) count++;
        }
        printf("%lld\n",count+1);
    }
}