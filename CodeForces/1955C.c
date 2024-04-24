#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,k,l,r,x=0,anon=0,sum=0;
        scanf("%lld %lld",&n,&k);
        long long a[n];
        for(int i=0;i<n;i++) scanf("%lld",&a[i]);
        l=0;
        r=n-1;
        while(l<=r){
            if(l==r){
                if(a[l]<=k) anon=0;
                else anon=1;
                break;
            }
            if(a[l]>a[r]) {
                x=a[r--];
                a[l]-=x;
                k-=(x*2);
                sum+=(x*2);
                if(k==0) {
                    anon=r-l+1;
                    break;
                }
                else if(k<0){
                    anon=r-l+2;
                    break;
                }
            }
            else if(a[l]<a[r]){
                x=a[l++];
                a[r]-=x;
                k-=(x*2);
                sum+=(x*2);
                if(k==0) {
                    anon=r-l+1;
                    break;
                }
                else if(k==-1){
                    anon=r-l+1;
                    break;
                }
                else if(k<-1){
                    anon=r-l+2;
                    break;
                }
            }
            else{
                x=a[r--];
                l++;
                k-=(x*2);
                sum+=(x*2);
                if(k==0) {
                    anon=r-l+1;
                    break;
                }
                else if(k==-1){
                    anon=r-l+2;
                    break;
                }
                else if(k<-1){
                    anon=r-l+3;
                    break;
                }
            }
        }
        printf("%lld\n",n-anon);
    }
}