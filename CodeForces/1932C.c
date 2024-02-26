#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,m,x,y;
        scanf("%lld %lld",&n,&m);
        long long a[n],b[n],c[n];
        for(int i=0;i<n;i++) scanf("%lld",&a[i]);
        char s[n+1];
        scanf("%s",s);
        x=0;
        y=n-1;
        for(int i=0;i<n;i++){
            if(s[i]=='L') b[i]=a[x++];
            else b[i]=a[y--];
        }
        c[n-1]=b[n-1]%m;
        for(int i=n-2;i>=0;i--) c[i]=(c[i+1]*b[i])%m;
        for(int i=0;i<n;i++) printf("%lld ",c[i]);
        printf("\n");
    }
}