#include<stdio.h>
#include<string.h>
int main(){
    char s[1000];
    scanf("%s",s);
    int color[4],x[4]={0};
    for(int i=0;i<strlen(s);i++){
        if(i%4==0){
            if(s[i]=='!') x[0]++;
            if(s[i]=='R') color[0]=0;
            else if(s[i]=='B') color[1]=0;
            else if(s[i]=='Y') color[2]=0;
            else if(s[i]=='G') color[3]=0;
        }
        else if(i%4==1){
            if(s[i]=='!') x[1]++;
            if(s[i]=='R') color[0]=1;
            else if(s[i]=='B') color[1]=1;
            else if(s[i]=='Y') color[2]=1;
            else if(s[i]=='G') color[3]=1;
        }
        else if(i%4==2){
            if(s[i]=='!') x[2]++;
            if(s[i]=='R') color[0]=2;
            else if(s[i]=='B') color[1]=2;
            else if(s[i]=='Y') color[2]=2;
            else if(s[i]=='G') color[3]=2;
        }
        else if(i%4==3){
            if(s[i]=='!') x[3]++;
            if(s[i]=='R') color[0]=3;
            else if(s[i]=='B') color[1]=3;
            else if(s[i]=='Y') color[2]=3;
            else if(s[i]=='G') color[3]=3;
        }
    }
    printf("%d %d %d %d\n",x[color[0]],x[color[1]],x[color[2]],x[color[3]]);
}