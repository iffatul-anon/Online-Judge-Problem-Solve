#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,count=0;
        scanf("%d",&n);
        char s[n+1];
        int a[n][n];
        for(int i=0;i<n;i++) {
            scanf("%s",s);
            for(int j=0;j<n;j++) a[i][j]=s[j]-'0';
        }
        for(int i=0;i<(n+1)/2;i++){
            for(int j=0;j<n/2;j++){
                int aa=a[i][j]+a[j][n-i-1]+a[n-i-1][n-j-1]+a[n-j-1][i];
                if(aa==1 || aa==3) count++;
                else if(aa==2) count+=2;
            }
        }
        printf("%d\n",count);
    }
}