#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int n,m,f=0,f2=0,x=0,y=0;
    scanf("%d %d",&n,&m);
    char s[n+1],t[m+1];
    scanf("%s %s",s,t);
    for(int i=0;i<n;i++){
        if(s[i]==t[x]) x++;
        else{
            f=1;
            while(x<m-1) {
                x++;
                f2=0;
                y=0;
                for(int j=x;j<m;j++){
                    if(s[i+y]!=t[j]) f2=1;
                    y++;
                }
            }
            if(f2==1){
                f=1;
                break;
            }
            x=0;
        }
        if(x==m) x=0;
    }
    if(f==0) printf("Yes\n");
    else printf("No\n");
}