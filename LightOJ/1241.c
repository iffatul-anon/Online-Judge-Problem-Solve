#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int j=1;j<=t;j++){
        int n,a,x=2,c=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&a);
            if((a-x)%5==0) c+=(a-x)/5;
            else c+=(a-x)/5+1;
            x=a;
        }
        printf("Case %d: %d\n",j,c);
    }
}