#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,c,anon,j;
        scanf("%d",&n);
        anon=n;
        char s[n+1];
        scanf("%s",s);
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                c=0;
                j=0;
                while(j<n){
                    for(int k=0;k<i;k++){
                        if(s[k]!=s[j++]) c++;
                    }
                }
                if(c<2 && i<anon) anon=i;
                if(c+1==n/i && i!=n){
                    c=0;
                    j=0;
                    while(j<n){
                        for(int k=i;k<i+i;k++){
                            if(s[k]!=s[j++]) c++;
                        }
                    }
                    if(c<2 && i<anon) anon=i;
                }
                c=0;
                j=0;
                while(j<n){
                    for(int k=0;k<n/i;k++){
                        if(s[k]!=s[j++]) c++;
                    }
                }
                if(c<2 && n/i<anon) anon=n/i;
                if(c+1==i && n/i!=n){
                    c=0;
                    j=0;
                    while(j<n){
                        for(int k=n/i;k<n/i+n/i;k++){
                            if(s[k]!=s[j++]) c++;
                        }
                    }
                    if(c<2 && n/i<anon) anon=n/i;
                }
            }
        }
        printf("%d\n",anon);
    }
}