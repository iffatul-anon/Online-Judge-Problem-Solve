#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,c1=0,c2=0;
        scanf("%lld",&n);
        char s[n+1];
        long long a[n+2];
        a[0]=0;
        scanf("%s",s);
        for(int i=n-1;i>=0;i--){
            if(s[i]=='1') c1++;
            else{
                c2++;
                a[c2]=a[c2-1]+c1;
            }
        }
        for(int i=1;i<=c2;i++) printf("%lld ",a[i]);
        for(int i=0;i<c1;i++) printf("-1 ");
        printf("\n");
    }
}