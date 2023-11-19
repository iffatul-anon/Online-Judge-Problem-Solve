#include<stdio.h>
#include<stdlib.h>
int main(){
    while(1){
        int n;
        scanf("%d",&n);
        if(n==0){
            break;
        }
        int a=n/90;
        int b=(7*a)+((n%90)/13);
        if((n%90)%13!=0){
            b++;
        }
        printf("Brasil %d x Alemanha %d\n",a,b);
    }
    return 0;
}