#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[1000000];
        scanf("%s",s);
        int l=strlen(s),c=0,f=0,c2=0,min=10000000;
        for(int i=0;i<l;i++) {
            if(s[i]=='A') {
                c++;
                c2++;
            }
            else{
                if(c2<min && c2>0) min=c2;
                c2=0;
            }
            if(i<l && s[i]=='B' && s[i+1]=='B') f=1;
        }
        if(c2<min && c2>0) min=c2;
        if(s[0]=='B' || s[l-1]=='B' || f==1) printf("%d\n",c);
        else if(c==l) printf("0\n");
        else printf("%d\n",c-min);
    }
}