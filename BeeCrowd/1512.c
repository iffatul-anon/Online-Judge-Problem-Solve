#include<stdio.h>
int main(){
    while(1){
        int n,a,b;
        scanf("%d %d %d",&n,&a,&b);
        if(n==0){
            return 0;
        }
        int anon;
        if(a>b){
            anon=a;
        }
        else{
            anon=b;
        }
        int x=2;
        while(1){
            if(anon%a==0 && anon%b==0){
                break;
            }
            anon=b*x++;
        }
        printf("%d\n",(n/a)+(n/b)-(n/anon));
    }
}