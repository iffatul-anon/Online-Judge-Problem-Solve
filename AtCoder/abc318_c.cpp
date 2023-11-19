#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long n,d,p,sum=0,x=0,y=0;
    scanf("%lld %lld %lld",&n,&d,&p);
    long long a[n];
    for(int i=0;i<n;i++) scanf("%lld",&a[i]);
    sort(a,a+n);
    for(int i=n-1;i>=0;i--){
        y++;
        x+=a[i];
        if(y==d){
            if(x>p) sum+=p;
            else sum+=x;
            y=0;
            x=0;
        }
    }
    if(y>0 && x>p) sum+=p;
    else if(y>0) sum+=x; 
    printf("%lld\n",sum);
}