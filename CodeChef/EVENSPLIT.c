#include<stdio.h>
#include<string.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",&s);
        if(n==2){
            printf("%s\n",s);
        }
        else{
            int count0=0,count1=0;
            for(int j=0;j<n;j++){
                if(s[j]=='0'){
                    count0++;
                }
                if(s[j]=='1'){
                    count1++;
                }
            }
            for(int j=0;j<count0;j++){
                printf("0");
            }
            for(int j=0;j<count1;j++){
                printf("1");
            }
            printf("\n");
        }
    }
    return 0;
}