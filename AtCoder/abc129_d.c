#include<stdio.h>
#define int long long
signed main(){
    int h,w,mx=0,c;
    scanf("%lld %lld",&h,&w);
    char s[h][w+1];
    int ar[h][w],br[h][w];
    for(int i=0;i<h;i++) scanf("%s",s[i]);
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(s[i][j]=='#') {
                ar[i][j]=-1;
                br[i][j]=-1;
            }
            else{
                c=0;
                if(j==0 || ar[i][j-1]==-1){
                    for(int k=j+1;k<w;k++){
                        if(s[i][k]=='#') break;
                        else c++;
                    }
                    ar[i][j]=c;
                }
                else ar[i][j]=ar[i][j-1];
                c=0;
                if(i==0 || br[i-1][j]==-1){
                    for(int k=i+1;k<h;k++){
                        if(s[k][j]=='#') break;
                        else c++;
                    }
                    br[i][j]=c;
                }
                else br[i][j]=br[i-1][j];
            }
            if(ar[i][j]+br[i][j]>mx) mx=ar[i][j]+br[i][j];
        }
    }
    printf("%lld\n",mx+1);
}
