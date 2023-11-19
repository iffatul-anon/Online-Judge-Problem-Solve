#include<stdio.h>
#include<stdlib.h>
int main(){
    int t,n,m;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&n,&m);
        int a;
        long long int sum=0;
        for(int j=0;j<n;j++){
            scanf("%d",&a);
            if(a<=m/2){
                sum=sum+(m-a);
            }
            else{
                sum=sum+(a-1);
            }
        }
        printf("%lld\n",sum);
    }
    return 0;
}