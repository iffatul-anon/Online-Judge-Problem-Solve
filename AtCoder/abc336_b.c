#include<stdio.h>
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t>0){
        if(t%2==1) break;
        t/=2;
        c++;
    }
    printf("%d\n",c);
}