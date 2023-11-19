#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,c=0,f=0,x=1;
        scanf("%d %d",&n,&m);
        char s[n][m+1],s2[n][m+1];
        int rb[n],rw[n],cb[m],cw[m];
        for(int i=0;i<n;i++) scanf("%s",s[i]);
        for(int i=0;i<n;i++){
            c=0;
            rw[i]=0;
            rb[i]=0;
            for(int j=0;j<m;j++){
                cb[j]=0;
                cw[j]=0;
                if(s[i][j]=='.') c++;
            }
            if((m-c)%2==1){
                f=1;
                break;
            }
        }
        for(int j=0;j<m;j++){
            c=0;
            for(int i=0;i<n;i++) if(s[i][j]=='.') c++;
            if((n-c)%2==1){
                f=1;
                break;
            }
        }
        if(f==1) printf("-1\n");
        else{
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(s[i][j]=='.') s2[i][j]=s[i][j];
                    else if(s[i][j]=='L' || s[i][j]=='U') {
                        s2[i][j]='W';
                        rw[i]++;
                        cw[j]++;
                    }
                    else {
                        s2[i][j]='B';
                        rb[i]++;
                        cb[j]++;
                    }
                }
                s2[i][m]=0;
            }
            while(x){
                x=0;
                for(int i=0;i<n;i++){
                    for(int j=0;j<m;j++){
                        if(s[i][j]=='L' && s2[i][j]=='W' && cw[j]>cb[j]){
                            x=1;
                            s2[i][j]='B';
                            s2[i][j+1]='W';
                            cw[j]--;
                            cb[j]++;
                            cw[j+1]++;
                            cb[j+1]--;
                        }
                        if(s[i][j]=='U' && s2[i][j]=='W' && rw[i]>rb[i]){
                            x=1;
                            s2[i][j]='B';
                            s2[i+1][j]='W';
                            rw[i]--;
                            rb[i]++;
                            rw[i+1]++;
                            rb[i+1]--;
                        }
                    }
                }
            }
            for(int i=0;i<n;i++) printf("%s\n",s2[i]);
        }
    }
}