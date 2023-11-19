#include<stdio.h>
#include<string.h>
int main(){
    int t;
    char s[201];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%s",&s);
        int l=strlen(s);
        int sum=0;
        for(int j=0;j<l;j++){
            int count=1;
            for(int k=j+1;k<l;k++){
                if(s[j]==s[k]){
                    count++;
                    s[k]=s[l-1];
                    l--;
                    k--;
                }
            }
            if(count%2==0){
                sum=sum+(count/2);
            }
            else{
                sum=sum+(count/2)+1;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}