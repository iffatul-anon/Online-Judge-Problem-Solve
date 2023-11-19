#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,x,flag=0,a,y=0;
        scanf("%lld %lld",&n,&x);
        for(int j=0;j<3;j++){
            for(int i=0;i<n;i++){
                scanf("%lld",&a);
                if(flag==0){
                    if((x&a)!=a) flag=1;
                    else y=y|a;
                }
            }
            flag=0;
        }
        if(x==y) printf("Yes\n");
        else printf("No\n");
    }
}