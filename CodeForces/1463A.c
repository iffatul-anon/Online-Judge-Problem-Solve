#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,c,sum=0;
        scanf("%d %d %d",&a,&b,&c);
        sum=a+b+c;
        if(sum%9==0){
            if(a<sum/9 || b<sum/9 || c<sum/9) printf("NO\n");
            else printf("YES\n");
        }
        else printf("NO\n");
    }
}