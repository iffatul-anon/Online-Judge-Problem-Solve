#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k,a[26]={0},i;
        scanf("%d %d",&n,&k);
        char s[n+1],s2[k+1];  
        s2[k]=0;
        int m=n/k;  
        scanf("%s",s);
        for(i=0;i<n;i++) a[s[i]-97]++;
        for(i=0;i<m;i++){
            if(a[i]<k){
                k--;
                s2[k]=i+97;
                i--;
            }
            if(k==0) break;
        }
        k--;
        while(k>=0) s2[k--]=i+97;
        printf("%s\n",s2);
    }
}