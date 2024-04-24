#include <stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int n,p,q,a,c=0,sum=0;
        scanf("%d %d %d",&n,&p,&q);
        for(int j=0;j<n;j++){
            scanf("%d",&a);
            if(j<p && sum+a<=q){
                c++;
                sum+=a;
            }
        }
        printf("Case %d: %d\n",i,c);
    }
}
