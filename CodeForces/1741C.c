#include <stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        long long a[n+1],max=0,flag=0,key,max2=0,min=n,i,j;
        a[0]=0;
        for(int i=1;i<=n;i++){
            scanf("%lld",&a[i]);
            if(max<a[i]) max=a[i];
            a[i]=a[i]+a[i-1];
        }
        for(i=1;i<=n;i++){
            key=a[i];
            max2=0;
            flag=0;
            for(j=1;j<=n;j++){
                if(a[j]-a[flag]==key){
                    if(j-flag>max2) max2=j-flag;
                    flag=j;
                }
                else if(a[j]-a[flag]>key || j==n) break;
            }
            if(max2<min && j>n) min=max2;
        }
        printf("%lld\n",min);
    }
}