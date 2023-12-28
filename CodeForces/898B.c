#include<stdio.h>
int main(){
    int n,a,b,n2;
    scanf("%d %d %d",&n,&a,&b);
    if(n%a==0){
        printf("YES\n");
        printf("%d 0\n",n/a);
    }
    else if(n%b==0){
        printf("YES\n");
        printf("0 %d\n",n/b);
    }
    else{
        n2=n%a;
        n-=n2;
        while(n%a!=0 || n2%b!=0){
            n-=a;
            n2+=a;
            if(n<=0){
                printf("NO\n");
                return 0;
            }
        }
        printf("YES\n");
        printf("%d %d\n",n/a,n2/b);
    }
}