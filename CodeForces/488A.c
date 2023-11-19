#include <stdio.h>
#include<stdlib.h>
int main() {
    int a,b,f=0;
    scanf("%d",&a);
    for(int i=1;i<=20;i++){
        b=a+i;
        while(abs(b)>0){
            if(abs(b)%10==8) f=1;
            b=b/10;
        }
        if(f==1) {
            printf("%d\n",i);
            return 0;
        }
    }
}