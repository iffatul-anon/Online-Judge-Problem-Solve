#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[1000];
        scanf("%s",s);
        int a[27]={0},count=1;
        for(int i=0;i<strlen(s);i++){
            if(s[i]==s[i+1]){
                count++;
            }
            else{
                if(count%2!=0) a[s[i]-96]=1;
                count=1;
            }
        }
        for(int i=0;i<27;i++) if(a[i]==1) printf("%c",i+96);
        printf("\n");
    }
}