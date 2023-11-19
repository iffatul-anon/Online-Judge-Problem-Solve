#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long x,a,b,flag=0;
        scanf("%lld",&x);
        for(long long i=1;i<cbrtl(x);i++){
            a=x-powl(i,3);
            b=cbrtl(a);
            if(powl(b,3)==a){
                flag=1;
                break;
            }
        }
        if(flag==1) printf("YES\n");
        else printf("NO\n");
    }
}