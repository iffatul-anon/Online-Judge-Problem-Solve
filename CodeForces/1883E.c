#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,c=0,x,ans=0;
        scanf("%lld",&n);
        long long a[n];
        for(int i=0;i<n;i++) scanf("%lld",&a[i]);
        for(int i=1;i<n;i++){
            if(a[i]<=a[i-1]){
                x=a[i];
                while(x<a[i-1]) {
                    x=x*2;
                    c++;
                }
            }
            else{
                x=a[i-1];
                while(x*2<=a[i] && c){
                    x=x*2;
                    c--;
                }
            }
            ans+=c;
        } 
        printf("%lld\n",ans);
    }
}