#include<stdio.h>
#include<string.h>
int main(){
    while(1){
        int n;
        scanf("%d",&n);
        if(n==0){
            return 0;
        }
        char s[n+1];
        scanf("%s",&s);
        int c=0;
        for(int i=0;i<n;i++){
            if(s[i]=='E'){
                c--;
            }
            else{
                c++;
            }
        }
        c=c%4;
        if(c==0){
            printf("N\n");
        }
        else if(c==1 || c==-3){
            printf("L\n");
        }
        else if(c==-1 || c==3){
            printf("O\n");
        }
        else{
            printf("S\n");
        }
    }
}