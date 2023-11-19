#include<stdio.h>
#include<string.h>
int main(){
    int n,c1=0,c2=0,c3=0,max=0;
    char s[1000];
    scanf("%d %s",&n,s);
    for(int i=0;i<n;i++){
        if(s[i]=='_'){
            c1=0;
            continue;
        }
        if(s[i]=='('){
            c2=0;
            for(int j=i+1;j<n;j++){
                if(s[j]=='_'){
                    if(c2>0) c3++;
                    c2=0;
                    continue;
                }
                if(s[j]==')'){
                    if(c2>0) c3++;
                    i=j;
                    break;
                }
                c2++;
            }
            c1=0;
            continue;
        }
        c1++;
        if(c1>max) max=c1;
    }
    printf("%d %d\n",max,c3);
}