#include<stdio.h>
#include<string.h>
#include<math.h>
int main() {
    int t;
    scanf("%d",&t);
    for(int j=1;j<=t;j++){
        int a=0,b=0,c=0,d=0,i,aa=0,bb=0,cc=0,dd=0;
        char s[100],s2[100],ss1[10],ss2[10],ss3[10],ss4[10];
        scanf("%s %s",s,s2);
        int l=strlen(s),l2=35;
        for(i=0;i<l;i++){
            if(s[i]=='.') break;
            a=(a*10)+s[i]-'0';
        }
        for(i=i+1;i<l;i++){
            if(s[i]=='.') break;
            b=(b*10)+s[i]-'0';
        }
        for(i=i+1;i<l;i++){
            if(s[i]=='.') break;
            c=(c*10)+s[i]-'0';
        }
        for(i=i+1;i<l;i++){
            d=(d*10)+s[i]-'0';
        }
        
        for(i=0;i<8;i++) ss1[i]=s2[i];
        for(i=9;i<17;i++) ss2[i-9]=s2[i];
        for(i=18;i<26;i++) ss3[i-18]=s2[i];
        for(i=27;i<35;i++) ss4[i-27]=s2[i];
        ss1[8]=0;
        ss2[8]=0;
        ss3[8]=0;
        ss4[8]=0;
        for(int i=0;i<8;i++) if(ss1[i]=='1') aa+=pow(2,7-i);
        for(int i=0;i<8;i++) if(ss2[i]=='1') bb+=pow(2,7-i);
        for(int i=0;i<8;i++) if(ss3[i]=='1') cc+=pow(2,7-i);
        for(int i=0;i<8;i++) if(ss4[i]=='1') dd+=pow(2,7-i);
        if(a==aa && b==bb && c==cc && d==dd) printf("Case %d: Yes\n",j);
        else printf("Case %d: No\n",j);
    }
}
