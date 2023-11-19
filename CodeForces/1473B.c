#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[100],t[100];
        scanf("%s %s",s,t);
        int l1=strlen(s),l2=strlen(t),count=1,flag=0,x=0,y=0;
        if(l1>l2){
            while(1){
                if(s[x++]!=t[y++]){
                    flag=1;
                    break;
                }
                if(x==l1 && y==l2) break;
                if(x==l1){ 
                    x=0;
                    count++;
                }
                if(y==l2) y=0;
            }
            if(flag==1) printf("-1");
            else for(int i=0;i<count;i++) printf("%s",s);
        }
        else{
            while(1){
                if(t[x++]!=s[y++]){ 
                    flag=1;
                    break;
                }
                if(x==l2 && y==l1) break;
                if(x==l2){ 
                    x=0;
                    count++;
                }
                if(y==l1) y=0;
            }
            if(flag==1) printf("-1");
            else for(int i=0;i<count;i++) printf("%s",t);
        }
        printf("\n");
    }
}