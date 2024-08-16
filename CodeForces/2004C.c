#include<stdio.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n,k,c=0,sum1=0,sum2=0,x;
        scanf("%lld %lld",&n,&k);
        int a[n];
        for(int i=0;i<n;i++) scanf("%lld",&a[i]);
        sort(a,a+n);
        for(int i=n-1;i>=0;i--){
            c++;
            if(c%2) sum1+=a[i];
            else{
                if(a[i]==a[i+1]) sum2+=a[i];
                else{
                    sum2+=a[i];
                    if(k>0){
                        x=a[i+1]-a[i];
                        if(x>k){
                            sum2+=k;
                            k=0;
                        }
                        else{
                            sum2+=x;
                            k-=x;
                        }
                    }
                }
            }
        }
        printf("%lld\n",sum1-sum2);
    }
}