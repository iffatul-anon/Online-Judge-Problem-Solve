#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,m,k=0,i,j=0;
        scanf("%lld %lld",&n,&m);
        char a[n+1],b[m+1];
        scanf("%s %s",a,b);
        for(i=0;i<n;i++){
            for(j=j;j<m;j++){
                if(a[i]==b[j]) {
                    k++;
                    j++;
                    break;
                }
            }
        }
        printf("%lld\n",k);
    }
}