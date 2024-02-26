#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long a,b,x,y;
        scanf("%lld %lld",&a,&b);
        if(a%2==1 && b%2==1) printf("No\n");
        else if(a%2==1){
            x=b/2;
            y=a+x;
            if(x==a && y==b) printf("No\n");
            else printf("Yes\n");
        }
        else if(b%2==1){
            x=a/2;
            y=b+x;
            if(x==b && y==a) printf("No\n");
            else printf("Yes\n");
        }
        else{
            x=b/2;
            y=a+x;
            if(x==a && y==b){
                x=a/2;
                y=b+x;
                if(x==b && y==a) printf("No\n");
                else printf("Yes\n");
            }
            else printf("Yes\n");
        }
    }
}