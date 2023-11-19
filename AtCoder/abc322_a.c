#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char s[1000];
    scanf("%s",s);
    if(strstr(s,"ABC")==0) printf("-1\n");
    else{
        for(int i=0;i<n-2;i++){
            if(s[i]=='A' && s[i+1]=='B' && s[i+2]=='C'){
                printf("%d\n",i+1);
                return 0;
            }
        }
    }
}