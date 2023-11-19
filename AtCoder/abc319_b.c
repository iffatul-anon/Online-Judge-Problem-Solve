#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    printf("1");
    for(int i=1;i<=n;i++){
        if(i%n==0) printf("1");
        else if(n%2==0 && i%(n/2)==0) printf("2");
        else if(n%3==0 && i%(n/3)==0) printf("3");
        else if(n%4==0 && i%(n/4)==0) printf("4");
        else if(n%5==0 && i%(n/5)==0) printf("5");
        else if(n%6==0 && i%(n/6)==0) printf("6");
        else if(n%7==0 && i%(n/7)==0) printf("7");
        else if(n%8==0 && i%(n/8)==0) printf("8");
        else if(n%9==0 && i%(n/9)==0) printf("9");
        else printf("-");
    }
}