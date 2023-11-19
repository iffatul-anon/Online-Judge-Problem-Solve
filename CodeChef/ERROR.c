#include<stdio.h>
#include<string.h>
int main(){
    int t;
    char s[100000];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%s",&s);
        int l=strlen(s);
        if(l<3){
            printf("Bad\n");
        }
        else{
            int flag=0;
            for(int j=0;j<l-2;j++){
                if((s[j]=='1' && s[j+1]=='0' && s[j+2]=='1')||(s[j]=='0' && s[j+1]=='1' && s[j+2]=='0')){
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                printf("Good\n");
            }
            else{
                printf("Bad\n");
            }
        }
    }
    return 0;
}