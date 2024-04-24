#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a=0;
        char s[6];
        scanf("%s",s);
        a=(s[0]-'0')*10+(s[1]-'0');
        if(a>12){
            a-=12;
            if(a>9) printf("%d:%c%c PM\n",a,s[3],s[4]);
            else printf("0%d:%c%c PM\n",a,s[3],s[4]);
        }
        else if(a==12) printf("%s PM\n",s);
        else if(a==0) printf("12:%c%c AM\n",s[3],s[4]);
        else printf("%s AM\n",s);
    }
}