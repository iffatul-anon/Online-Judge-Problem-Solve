#include<string.h>
int main(){
    char s[10000];
    int n=0;
    while(EOF!=scanf("%s",s)){
        if(n>0) printf("\n");
        n++;
        int f1=0,f2=0;
        int l=strlen(s);
        int a=0,b=0,c=0,d=0,e=0;
        for(int i=0;i<l;i++){
            a=((a*10)+(s[i]-48))%4;
            b=((b*10)+(s[i]-48))%100;
            c=((c*10)+(s[i]-48))%400;
            d=((d*10)+(s[i]-48))%15;
            e=((e*10)+(s[i]-48))%55;
        }
        if(c%400==0 || (a%4==0 && b%100!=0)){
            f1=1;
            printf("This is leap year.\n");
        }
        if(d%15==0){
            f2=1;
            printf("This is huluculu festival year.\n");
        }
        if(e%55==0 && f1==1){
            printf("This is bulukulu festival year.\n");
        }
        if(f1==0 && f2==0){
            printf("This is an ordinary year.\n");
        }
    }
    return 0;
}