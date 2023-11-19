#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int x,y,z;
    int sum=0;
    scanf("%d %d %d",&x,&y,&z);
    if(x>a){
        sum=sum+x-a;
    }
    if(y>b){
        sum=sum+y-b;
    }
    if(z>c){
        sum=sum+z-c;
    }
    printf("%d\n",sum);
    return 0;
}