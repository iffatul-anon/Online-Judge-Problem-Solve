#include<stdio.h>
#include<string.h>
#define int long long
signed main(){
    int t;
    scanf("%lld",&t);
    while(t--){
        char s1[1000],s2[1000];
        scanf("%s %s",s1,s2);
        int l1=strlen(s1),l2=strlen(s2),max=0;
        for(int i=0;i<l2;i++){
            int x=i,y=0,c=0;
            while(x<l2 && y<l1){
                if(s2[x]==s1[y]){
                    c++;
                    x++;
                }
                y++;
            }
            if(c>max) max=c;
        }
        printf("%lld\n",l1+(l2-max));
    }
}