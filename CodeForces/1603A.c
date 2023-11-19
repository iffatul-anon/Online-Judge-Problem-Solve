#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,a,flag=0,flag2,x;
        scanf("%lld",&n);
        for(int i=1;i<=n;i++){ 
            scanf("%lld",&a);
            if(i<22){
                x=i+1;
                flag2=0;
                while(x>1){
                    if(a%x!=0){
                        flag2=1;
                        break;
                    }
                    x--;
                }
                if(flag2==0) flag=1;
            }
        }
        if(flag==1) printf("NO\n");
        else printf("YES\n");
    }
}
