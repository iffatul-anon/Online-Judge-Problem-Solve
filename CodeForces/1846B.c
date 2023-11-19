#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s1[4],s2[4],s3[4];
        scanf("%s %s %s",s1,s2,s3);
        if(s1[0]==s2[0] && s1[0]==s3[0] && s1[0]!='.') printf("%c\n",s1[0]);
        else if(s1[1]==s2[1] && s1[1]==s3[1] && s1[1]!='.') printf("%c\n",s1[1]);
        else if(s1[2]==s2[2] && s1[2]==s3[2] && s1[2]!='.') printf("%c\n",s1[2]);
        else if(s1[0]==s1[1] && s1[0]==s1[2] && s1[0]!='.') printf("%c\n",s1[0]);
        else if(s2[0]==s2[1] && s2[0]==s2[2] && s2[0]!='.') printf("%c\n",s2[0]);
        else if(s3[0]==s3[1] && s3[0]==s3[2] && s3[0]!='.') printf("%c\n",s3[0]);
        else if(s1[0]==s2[1] && s1[0]==s3[2] && s1[0]!='.') printf("%c\n",s1[0]);
        else if(s1[2]==s2[1] && s1[2]==s3[0] && s1[2]!='.') printf("%c\n",s1[2]);
        else printf("DRAW\n");
    }
}