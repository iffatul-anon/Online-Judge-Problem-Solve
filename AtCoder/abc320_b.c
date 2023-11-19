#include<stdio.h>
#include<string.h>
int main(){
    char s[1000];
    scanf("%s",s);
    int l=strlen(s),max=0;
    for(int i=0;i<l;i++){
        for(int j=l-1;j>=i;j--){
            int x=i,y=j;
            while(x<=y){
                if(s[x]==s[y]){
                    x++;
                    y--;
                }
                else break;
            }
            if(x>y && max<(j-i+1)) max=j-i+1;
        }
    }
    printf("%d\n",max);
}