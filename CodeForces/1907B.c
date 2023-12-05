#include<stdio.h>
#include<string.h>
int a[1000010],b[1000010];
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[1000010];
        scanf("%s",s);
        int y=0,z=0;
        int l=strlen(s);
        for(int i=0;i<l;i++){
            if(s[i]=='b'){
                s[i]='.';
                if(y>0) {
                    s[a[y-1]]='.';
                    y--;
                }
            }
            else if(s[i]=='B'){
                s[i]='.';
                if(z>0) {
                    s[b[z-1]]='.';
                    z--;
                }
            }
            else{
                if(s[i]>='a' && s[i]<='z'){
                    a[y++]=i;
                }
                else{
                    b[z++]=i;
                }
            }
        }
        for(int i=0;i<l;i++) if(s[i]!='.') printf("%c",s[i]);
        printf("\n");
    }
}