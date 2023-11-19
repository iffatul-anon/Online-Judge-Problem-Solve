#include<stdio.h>
#include<math.h>
int main(){
    while(1){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a==0){
            break;
        }
        printf("%d\n",(int)cbrt(a*b*c));
    }
    return 0;
}