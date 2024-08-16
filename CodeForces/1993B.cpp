#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
#define int long long
using namespace std;
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,c=0,e=0,o=0,max=0,max1=0,max2=0,f=0;
        scanf("%lld",&n);
        int a[n],b[n];
        for(int i=0;i<n;i++){
            scanf("%lld",&a[i]);
            if(a[i]%2==0) {
                b[e++]=a[i];
                if(a[i]>max1) max1=a[i];
            }
            else {
                o++;
                if(a[i]>max2) max2=a[i];
            }
            if(a[i]>max) max=a[i];
        }
        sort(b,b+e);
        if(e==n || e==0) printf("0\n");
        else if(max%2==1) printf("%lld\n",e);
        else {
            for(int i=0;i<e;i++){
                if(b[i]<max2) max2+=b[i];
                else f=1;
            }
            if(f) printf("%lld\n",e+1);
            else printf("%lld\n",e);
        }
    }
}