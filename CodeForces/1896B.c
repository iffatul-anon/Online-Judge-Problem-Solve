#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x=-1,y=-1;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",s);
        for(int i=0;i<n;i++){
            if(s[i]=='A'){
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
        if(x==-1 || y==-1 || x>y) printf("0\n");
        else printf("%d\n",y-x);
    }
}