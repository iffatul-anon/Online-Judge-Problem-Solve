#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n],x=0;
        char s[n+1];
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        for(int i=0;i<26;i++){
            x=0;
            for(int j=0;j<n;j++){
                if(a[j]==x){
                    s[j]='a'+i;
                    a[j]=-1;
                    x++;
                }
            }
        }
        s[n]=0;
        printf("%s\n",s);
    }
}