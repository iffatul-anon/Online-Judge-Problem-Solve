#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[100];
        scanf("%s",s);
        int n=strlen(s);
        int ca=0,cb=0,cc=0,count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='A') ca++;
            if(s[i]=='B') cb++;
            if(s[i]=='C') cc++;
        }
        if(ca+cb==cc){
            if(s[0]=='C') {
                for(int i=0;i<n;i++){
                    if(s[i]=='C') count++;
                    else if(count>0) count--;
                }
            }
            else if(s[n-1]=='C'){
                for(int i=0;i<n;i++){
                    if(s[i]!='C') count++;
                    else if(count>0) count--;
                }
            }
            else count=1;
            if( count==0) printf("YES\n");
            else printf("NO\n");
        }
        else if(ca+cc==cb){
            if(s[0]=='B') {
                for(int i=0;i<n;i++){
                    if(s[i]=='B') count++;
                    else if(count>0) count--;
                }
            }
            else if(s[n-1]=='B'){
                for(int i=0;i<n;i++){
                    if(s[i]!='B') count++;
                    else if(count>0) count--;
                }
            }
            else count=1;
            if( count==0) printf("YES\n");
            else printf("NO\n");
        }
        else if(cb+cc==ca){
            if(s[0]=='A') {
                for(int i=0;i<n;i++){
                    if(s[i]=='A') count++;
                    else if(count>0) count--;
                }
            }
            else if(s[n-1]=='A'){
                for(int i=0;i<n;i++){
                    if(s[i]!='A') count++;
                    else if(count>0) count--;
                }
            }
            else count=1;
            if( count==0) printf("YES\n");
            else printf("NO\n");
        }
        else printf("NO\n");
    }
}