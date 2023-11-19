#include<stdio.h>
#include<string.h>
int main(){
    int t;
    char s[1001];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%s",&s);
        int l=strlen(s);
        int flag=0;
        for(int j=0;j<l-2;j++){
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u'){
                if(s[j+1]=='a' || s[j+1]=='e' || s[j+1]=='i' || s[j+1]=='o' || s[j+1]=='u'){
                    if(s[j+2]=='a' || s[j+2]=='e' || s[j+2]=='i' || s[j+2]=='o' || s[j+2]=='u'){
                        flag=1;
                        break;
                    }
                }
            }
        }
        if(flag==1){
            printf("Happy\n");
        }
        else{
            printf("Sad\n");
        }
    }
    return 0;
}