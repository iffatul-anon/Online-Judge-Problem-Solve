#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#define int long long
using namespace std;
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,sum=0,mx=0,x=0,avg=0,c=0,y=0,z=0,m;
        scanf("%lld",&n);
        m=n;
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%lld",&a[i]);
            sum+=a[i];
            if(a[i]>mx) mx=a[i];
        }
        sort(a,a+n);
        if(n<=2) printf("-1\n");
        else{
            n=n*2;
            //printf("-> %lld %lld\n",sum,x);
            for(int i=0;i<n;i++){
                if(sum%n==0 && a[i]<sum/n) {
                    c++;
                    //printf("ok1\n");
                }
                else if(sum%n!=0 && a[i]<=sum/n) {
                    c++;
                    //printf("ok2\n");
                }
                else if(sum%n==0){
                    c++;
                    int dif=a[i]-(sum/n);
                    //dif--;
                    z=dif*n;
                    z+=1;
                    x+=z;
                    sum+=z;
                    //printf("ok3\n");
                }
                else{
                    c++;
                    int dif=a[i]-(sum/n);
                    dif--;
                    z=dif*n;
                    y=sum%n;
                    z+=(n-y+1);
                    x+=z;
                    sum+=z;
                    //printf("ok4\n");
                }
                //printf("%lld -> %lld %lld\n",i,sum,x);
                if(c>m/2) break;
                //printf("%lld -> %lld %lld\n",i,sum,x);
            }
            printf("%lld\n",x);
        }
        
    }
}