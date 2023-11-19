#include<stdio.h>
#include<string.h>
int main(){
    int n,max,max1,max2,max3,max4,max5,max6,max7;
    max1=max2=max3=max4=max5=max6=max7=1000000;
    scanf("%d",&n);
    while(n--){
        char s[5];
        int c;
        scanf("%d %s",&c,s);
        int l=strlen(s);
        if(l==3 && max1>c) max1=c;
        if(l==2 && max2>c && ((s[0]=='A' || s[0]=='B') && (s[1]=='A' || s[1]=='B'))) max2=c;
        if(l==2 && max3>c && ((s[0]=='A' || s[0]=='C') && (s[1]=='A' || s[1]=='C'))) max3=c;
        if(l==2 && max4>c && ((s[0]=='B' || s[0]=='C') && (s[1]=='B' || s[1]=='C'))) max4=c;
        if(l==1 && max5>c && s[0]=='A') max5=c;
        if(l==1 && max6>c && s[0]=='B') max6=c;
        if(l==1 && max7>c && s[0]=='C') max7=c;
    }
    max=max1;
    if(max>max2+max3) max=max2+max3;
    if(max>max2+max4) max=max2+max4;
    if(max>max3+max4) max=max3+max4;
    if(max>max5+max6+max7) max=max5+max6+max7;
    if(max>max2+max7) max=max2+max7;
    if(max>max3+max6) max=max3+max6;
    if(max>max4+max5) max=max4+max5;
    if(max==1000000) printf("-1\n");
    else printf("%d\n",max);
}