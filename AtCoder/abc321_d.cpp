#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    long long n,m,p,x,y,sum=0;
    scanf("%lld %lld %lld",&n,&m,&p);
    vector<long long> a(n),b(m),c(m);
    vector<long long>:: iterator it;
    for(int i=0;i<n;i++) scanf("%lld",&a[i]);
    for(int i=0;i<m;i++) scanf("%lld",&b[i]);
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    c[0]=b[0];
    for(int i=1;i<m;i++) c[i]=c[i-1]+b[i];
    for(int i=0;i<n;i++){
        if(a[i]>=p){
            sum+=(p*m);
            continue;
        }
        x=p-a[i];
        if(x>=b[m-1]){
            sum+=(a[i]*m)+c[m-1];
            continue;
        }
        if(x<b[0]){
            sum+=(p*m);
            continue;
        }
        it=upper_bound(b.begin(),b.end(),x);
        y=it-b.begin();
        sum+=(a[i]*y)+c[y-1]+(p*(m-y));
    }
    printf("%lld\n",sum);
}