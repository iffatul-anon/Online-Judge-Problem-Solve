#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,a,b;
        scanf("%d %d %d",&n,&a,&b);
        if(n%2==0){
            a=a*2;
            if(a>b) printf("%d\n",(n/2)*b);
            else printf("%d\n",(n/2)*a);
        }
        else{
            a=a*2;
            if(a>b) printf("%d\n",((n/2)*b)+(a/2));
            else printf("%d\n",((n/2)*a)+(a/2));
        }
    }
}