#include<stdio.h>
int main(){
    while(1){
        int n,m;
        scanf("%d %d",&n,&m);
        if(n==0){
            return 0;
        }
        int x=m-n;
        if(x==7 || x==12 || x==22 || x== 52 || x==102 || x==15 || x==25 || x==55 || x==105 || x==30 || x==60 || x==110 || x==70 || x==120 || x==150){
            printf("possible\n");
        }
        else{
            printf("impossible\n");
        }
    }
}