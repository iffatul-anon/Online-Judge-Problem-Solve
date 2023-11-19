#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        char s[100];
        scanf("%s",&s);
        int a;
        scanf("%d",&a);
        for(int i=0;i<strlen(s);i++){
            if(s[i]-a<65){
                s[i]=s[i]-a+26;
            }
            else{
                s[i]=s[i]-a;
            }
        }
        printf("%s\n",s);
    }
    return 0;
}