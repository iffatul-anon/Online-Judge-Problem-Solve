#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        char s[10000];
        scanf("%s",&s);
        int l=strlen(s);
        int count1=0,count2=0,flag=0;
        for(int j=0;j<l;j++){
            if(s[j]=='(' || s[j]=='{' || s[j]=='['){
                count1++;
            }
            else if(count1>count2){
                count2++;
            }
            else{
                flag=1;
                break;
            }
        }
        if(flag==0){
            if(count1==count2){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
