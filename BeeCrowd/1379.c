#include<stdio.h>
int main(){
    while(1){
        int a,b,c;
        scanf("%d %d",&a,&b);
        if(a==0){
            return 0;
        }
        printf("%d\n",a-(b-a));
    }
    return 0;
}