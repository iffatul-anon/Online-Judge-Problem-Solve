#include<stdio.h>
int GCD(int n1, int n2) {
    if (n2 != 0) return GCD(n2, n1 % n2);
    else return n1;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n;
        scanf("%lld",&n);
        long long a[n],b[n+1],gcd,flag=0;
        for(int i=0;i<n;i++) scanf("%lld",&a[i]);
        for(int i=0;i<n;i++){
            gcd = GCD(a[i],a[i+1]);
            b[i+1]=(a[i]*a[i+1])/gcd;
        }
        for(int i=1;i<n-1;i++){
            gcd = GCD(b[i],b[i+1]);
            if(gcd!=a[i]){
                flag=1;
                break;
            }
        }
        if(flag==0) printf("YES\n");
        else printf("NO\n");
    }
}