#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,c,d,x=0,f=0;
        scanf("%lld %lld %lld",&n,&c,&d);
        long long a[n*n],m[n][n],b[n*n];
        for(int i=0;i<n*n;i++) scanf("%lld",&a[i]);
        sort(a,a+(n*n));
        m[0][0]=a[0];
        for(int i=0;i<n;i++){
            if(i>0) m[i][0]=m[i-1][0]+c;
            for(int j=1;j<n;j++){
                m[i][j]=m[i][j-1]+d;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                b[x++]=m[i][j];
            }
        }
        sort(b,b+(n*n));
        for(int i=0;i<n*n;i++){
            if(a[i]!=b[i]){
                f=1;
                break;
            }
        }
        if(f) printf("NO\n");
        else printf("YES\n");
    }
}