#include<stdio.h>
#include<string.h>
int main(){
    int n,flag=0,i,j,flag2=0;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);
    for(i=n/2;i>0;i--){
        flag=0;
        if(s[i]==s[0]){
            for(j=0;j<i;j++){
                if(s[j]!=s[j+i]){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                flag2=1;
                break;
            }
        }
    }
    if(flag2==1) printf("%d\n",n-(i*2)+i+1);
    else printf("%d\n",n);
}
