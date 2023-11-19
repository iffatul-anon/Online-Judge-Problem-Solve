#include<stdio.h>
int count=0;
int fib(int x){
    count++;
    if(x<=1){
        return x;
    }
    return fib(x-1)+fib(x-2);
}
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        count=0;
        int x;
        scanf("%d",&x);
        int y=fib(x);
        printf("fib(%d) = %d calls = %d\n",x,count-1,y);
    }
    return 0;
}