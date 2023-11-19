#include<stdio.h>
#include<stdlib.h>
int main(){
    int t,n,a,b,x;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d",&a,&b,&x);
        int n=abs(a-b);
        if(n<x && n!=0){
            printf("NO\n");
        }
        else{
            if(n%x==0){
                if((n/x)%2==0){
                    printf("YES\n");
                }
                else{
                    printf("NO\n");
                }
            }
            else{
                printf("NO\n");
            }
        }
    }
}