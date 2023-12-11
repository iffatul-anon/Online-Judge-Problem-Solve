#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,k,min,x,y,z;
        scanf("%lld %lld",&n,&k);
        long long a[n];
        for(int i=0;i<n;i++) scanf("%lld",&a[i]);
        sort(a,a+n);
        min=a[0];
        if(k>2) printf("0\n");
        else if(k==2){
            for(int i=0;i<n;i++) {
                for(int j=i+1;j<n;j++) {
                    x=llabs(a[i]-a[j]);
                    if(x<min) min=x;
                    y=*lower_bound(a,a+n,x);
                    if(llabs(y-x)<min) min=llabs(y-x);
                    if(x>a[0]){
                        z=*(lower_bound(a,a+n,x)-1);
                        if(llabs(z-x)<min) min=llabs(z-x); 
                    } 
                }
            }
            printf("%lld\n",min);
        }
        else{
            for(int i=0;i<n;i++) {
                for(int j=i+1;j<n;j++) {
                    if(llabs(a[i]-a[j])<min) min=llabs(a[i]-a[j]);
                }
            }
            printf("%lld\n",min);
        }
    }
}