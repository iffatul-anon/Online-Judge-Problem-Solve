#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,f1=0,f2=0,f3=0,c=0,x=0,y=0;
        scanf("%d %d",&n,&m);
        char s1[n+1],s2[m+1];
        scanf("%s %s",s1,s2);
        for(int i=0;i<n-1;i++) if(s1[i]==s1[i+1]) f1=1;
        for(int i=0;i<m-1;i++) if(s2[i]==s2[i+1]) f2=1;
        for(int i=0;i<n-1;i++) {
            if(s1[i]==s1[i+1]) {
                if(y && s1[i]!=s1[x]) f3=1;
                x=i;
                y++;
                for(i=i;i<n-1;i++) if(s1[i]!=s1[i+1]) break;
            }
        }
        if(f1==0 || (f2==0 && f3==0 && s1[x]!=s2[0] && s1[x]!=s2[m-1])) printf("YES\n");
        else printf("NO\n");
    }
}