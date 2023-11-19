#include<stdio.h>
int main(){
    int a,b,flag=0,count=0;
    scanf("%d %d",&a,&b);
    if(a>b) flag=1;
    while(a>0 && b>0){
        count++;
        if(flag==0){
            a++;
            b-=2;
        }
        else{
            b++;
            a-=2;
        }
        if(b<=2) flag=1;
        else flag=0; 
        if(a==1) flag=0;
        if(a<0 || b<0) count--;
    }
    printf("%d\n",count);
}