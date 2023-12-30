#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[200005],s2[200005];
        scanf("%s",s);
        int l=strlen(s),c=0;
        for(int i=0;i<l;i++){
            if(c==0) s2[c++]=s[i];
            else if(s[i]=='B') c--;
            else s2[c++]=s[i];
        }
        printf("%d\n",c);
    }
}