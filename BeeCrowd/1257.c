#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int sum=0;
        for(int i=0;i<n;i++){
            char s[100];
            scanf("%s",&s);
            for(int j=0;j<strlen(s);j++){
                sum=sum+i+j+s[j]-65;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}