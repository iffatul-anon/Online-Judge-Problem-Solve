#include<stdio.h>
int main(){
    long long a=1,b,c;
    scanf("%llu",&b);
    while(a<16){
        c=a;
        for(int i=1;i<a;i++) c*=a;
        if(c==b){
            printf("%llu\n",a);
            return 0;
        }
        a++;
    }
    printf("-1\n");
}