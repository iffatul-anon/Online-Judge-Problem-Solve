#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,f=0;
        scanf("%lld",&n);
        long long m[n][n],a[n];
        for(int i=0;i<n;i++) a[i]=(1<<30)-1;
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                scanf("%lld",&m[i][j]);
                if(i!=j){
                    a[i]&=m[i][j];
                    a[j]&=m[i][j];
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && (a[i]|a[j])!=m[i][j]) f=1;
            }
        }
        if(f) printf("NO\n");
        else{
            printf("YES\n");
            for(int i=0;i<n;i++) printf("%lld ",a[i]);
            printf("\n");
        }
    }
}