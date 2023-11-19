#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,flag=0,flag2=0,count=0;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",s);
        for(int i=0;i<n;i++){
            if(flag==1){
                if(s[i]==':'){
                    if(flag2==1) count++;
                    flag2=0;
                }
                else if(s[i]=='('){ 
                    flag=0;
                    flag2=0;
                }
                else if(s[i]==')') flag2=1;
            }
            if(s[i]==':') flag=1;
        }
        printf("%d\n",count);
    }
}