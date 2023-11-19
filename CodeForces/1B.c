#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[1000],s2[1000],s3[1000];
        scanf("%s",s);
        int l=strlen(s),flag=0,flag2=0,r=0,c=0,x=100;
        for(int i=1;i<l;i++){
            if(s[i]>='0' && s[i]<='9') flag=1;
            if(flag==1 && s[i]=='C') {
                flag2=1;
                break;
            } 
        }
        if(flag2==1){
            flag=0;
            for(int i=1;i<l;i++){
                if(s[i]=='C') {
                    flag=1;
                    continue;
                }
                if(flag==0) r=r*10+s[i]-'0';
                if(flag==1) c=c*10+s[i]-'0';
            }
            while(c>0){
                if(c%26==0) {
                    s2[x--]='Z';
                    c-=26;
                }
                else s2[x--]=(c%26)+'A'-1;
                c=c/26;
            }
            for(int i=x+1;i<=100;i++) s3[i-x-1]=s2[i];
            s3[100-x]=0;
            printf("%s%d\n",s3,r);
        }
        else{
            for(int i=0;i<l;i++){
                if(s[i]>='A' && s[i]<='Z') r=r*26+s[i]-'A'+1;
                else c=c*10+s[i]-'0';
            }
            printf("R%dC%d\n",c,r);
        }
    }
}