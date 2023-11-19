#include<stdio.h>
#include<string.h>
int main(){
    int t;
    char s[1000];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%s",&s);
        int l=strlen(s);
        int sum=0;
        for(int j=0;j<l;j++){
            if(s[j]=='0'){
                sum=sum+6;
            }
            else if(s[j]=='1'){
                sum=sum+2;
            }
            else if(s[j]=='2'){
                sum=sum+5;
            }
            else if(s[j]=='3'){
                sum=sum+5;
            }
            else if(s[j]=='4'){
                sum=sum+4;
            }
            else if(s[j]=='5'){
                sum=sum+5;
            }
            else if(s[j]=='6'){
                sum=sum+6;
            }
            else if(s[j]=='7'){
                sum=sum+3;
            }
            else if(s[j]=='8'){
                sum=sum+7;
            }
            else if(s[j]=='9'){
                sum=sum+6;
            }
        }
        printf("%d leds\n",sum);
    }
    return 0;
}