#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    int n;
    while(EOF!=scanf("%d",&n)){
        int a;
        char s[n+1];
        for(int i=0;i<n;i++){
            scanf("%d",&a);
            int sum=0,j=0;
            while(a>0){
                sum=sum+((a%10)*pow(2,j++));
                a=a/10;
            }
            s[i]=sum;
        }
        s[n]='\0';
        printf("%s\n",s);
    }
}