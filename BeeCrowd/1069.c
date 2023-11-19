#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        char s[10000];
        scanf("%s",&s);
        int count1=0,count2=0;
        for(int i=0;i<strlen(s);i++){
            if(s[i]=='<'){
                count1++;
            }
            if(s[i]=='>' && count1>0){
                count1--;
                count2++;
            }
        }
        printf("%d\n",count2);
    }
    return 0;
}