#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[10][11];
        long long sum=0,x,y;
        for(int i=0;i<10;i++) scanf("%s",s[i]);
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                if(s[i][j]=='X'){
                    if(i<5) x=i+1;
                    else x=10-i;
                    if(j<5) y=j+1;
                    else y=10-j;
                    if(x<y) sum+=x;
                    else sum+=y;
                }
            }
        }
        printf("%lld\n",sum);
    }
}