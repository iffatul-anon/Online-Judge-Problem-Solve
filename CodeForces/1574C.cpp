#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    long long n,m,sum=0,x,y,a,b,c,sum1=0,sum2=0,sum3=0;
    scanf("%lld",&n);
    vector<long long>v(n);
    for(int i=0;i<n;i++){
        scanf("%lld",&v[i]);
        sum+=v[i];
    }
    sort(v.begin(),v.end());
    scanf("%lld",&m);
    while(m--){
        scanf("%lld %lld",&x,&y);
        a=lower_bound(v.begin(),v.end(),x)-v.begin();
        if(a==n){
            a--;
            sum1=sum-v[a];
            c=y-sum1;
            if(c<=0) c=x-v[a];
            else c=c+x-v[a];
            printf("%lld\n",c);
        }
        else if(v[a]==x){
            sum1=sum-x;
            if(sum1<y) printf("%lld\n",y-sum1);
            else printf("0\n");
        }
        else if(a==0){
            sum1=sum-v[0];
            if(sum1<y) printf("%lld\n",y-sum1);
            else printf("0\n");
        }
        else{
            sum2=sum-v[a];
            b=y-sum2;
            sum3=sum-v[a-1];
            c=y-sum3;
            if(c<=0) c=x-v[a-1];
            else c=c+x-v[a-1];
            if(b<=0) printf("0\n");
            else if(b<c) printf("%lld\n",b);
            else printf("%lld\n",c);
        }
    }
}