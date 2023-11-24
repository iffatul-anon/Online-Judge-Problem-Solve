#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k,c=0;
        scanf("%d %d",&n,&k);
        char s[n+1];
        scanf("%s",s);
        for(int i=0;i<n;i++) if(s[i]=='B') c++;
        if(c==k) printf("0\n");
        else if(c>k){
            for(int i=0;i<n;i++){
                if(s[i]=='B') c--;
                if(c==k){
                    printf("1\n%d A\n",i+1);
                    break;
                }
            }
        }
        else{
            for(int i=0;i<n;i++){
                if(s[i]=='A') c++;
                if(c==k){
                    printf("1\n%d B\n",i+1);
                    break;
                }
            }
        }
    }
}