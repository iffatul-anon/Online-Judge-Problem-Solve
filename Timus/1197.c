#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int x,y,a=0;
        char c[3];
        scanf("%s",c);
        x=c[1]-'0';
        y=c[0]-'a'+1;
        if(x+2<9 && y+1<9) a++;
        if(x+2<9 && y-1>0) a++;
        if(x-2>0 && y+1<9) a++;
        if(x-2>0 && y-1>0) a++;
        if(x+1<9 && y+2<9) a++;
        if(x-1>0 && y+2<9) a++;
        if(x+1<9 && y-2>0) a++;
        if(x-1>0 && y-2>0) a++;
        printf("%d\n",a);
    }
}