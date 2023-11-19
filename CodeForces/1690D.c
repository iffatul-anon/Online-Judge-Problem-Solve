#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k,count=0,min=1000000;
        scanf("%d %d",&n,&k);
        char s[n+1];
        int a[n+1];
        a[0]=0;
        scanf("%s",s);
        for(int i=0;i<n;i++){
            if(s[i]=='B') count++;
            a[i+1]=count;
        }
        for(int i=1;i<=n-k+1;i++) if(min>k-(a[i+k-1]-a[i-1])) min=k-(a[i+k-1]-a[i-1]);
        printf("%d\n",min);
    }
}