#include<stdio.h>
int main(){
    long long l=1,r=1000000000,y;
    char c[2];
    while(1){
        y=(l+r)/2;
        printf("Q %lld\n",y);
        fflush(stdout);
        scanf("%s",c);
        if(c[0]=='>') l=y+1;
        else if(c[0]=='<') r=y-1;
        else return 0;
    }
}