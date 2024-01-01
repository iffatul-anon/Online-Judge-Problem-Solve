#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[10];
        int a=0,b=0;
        scanf("%s",s);
        a=s[0]-'0';
        for(int i=1;i<strlen(s);i++){
            if(s[i]>'0') {
                b=s[i]-'0';
                for(int j=i+1;j<strlen(s);j++) b=(b*10)+(s[j]-'0');
                break;
            }
            a*=10;
        }
        if(a>=b) printf("-1\n");
        else printf("%d %d\n",a,b);
    }
}