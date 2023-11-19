#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,k,f=0,c1=0,c2=0;
        scanf("%lld %lld",&n,&k);
        int a[10]={0},b[10]={0},x[n],y[n];
        char s[25];
        for(int i=0;i<n;i++){
            scanf("%s",s);
            x[i]=strlen(s);
            for(int j=0;j<x[i];j++){
                a[s[j]-'0']++;
            }
        }
         for(int i=0;i<n;i++){
            scanf("%s",s);
            y[i]=strlen(s);
            for(int j=0;j<y[i];j++){
                b[s[j]-'0']++;
            }
            if(x[i]!=y[i]) f=1;
        }
        for(int i=0;i<10;i++){
            if(a[i]>b[i]) c1+=a[i]-b[i];
            else c2+=b[i]-a[i];
        }
        if(f==1) printf("NO\n");
        else if(c1<=k) printf("YES\n");
        else printf("NO\n");

    }
}
