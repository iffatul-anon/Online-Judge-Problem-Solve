#include<iostream>
#include<algorithm>
using namespace std;
int main(void) {
    long long n,x,c=0;
    scanf("%lld %lld",&n,&x);
    long long a[n];
    for(int i=0;i<n;i++) scanf("%lld",&a[i]);
    sort(a,a+n);
    int i=0,j=n-1;
    while(i<=j){
        if(a[i]+a[j]<=x){
            i++;
            j--;
            c++;
        }
        else{
            j--;
            c++;
        }
    }
    printf("%lld\n",c);
}