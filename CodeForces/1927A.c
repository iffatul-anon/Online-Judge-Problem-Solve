#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x=0,y=0;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",s);
        for(int i=0;i<n;i++){
            if(s[i]=='B'){
                x=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(s[i]=='B'){
                y=i;
                break;
            }
        }
        printf("%d\n",y-x+1);
    }
}