#include<stdio.h>
int main(){
    int n,k,c=0;
    scanf("%d %d",&n,&k);
    int a[26]={0},b[26]={0};
    char s[n+1];
    scanf("%s",s);
    for(int i=0;i<n;i++) a[s[i]-'A']++;
    for(int i=0;i<n;i++){
        b[s[i]-'A']++;
        c=0;
        for(int i=0;i<26;i++) if(b[i]>0) c++;
        if(c>k){
            printf("YES\n");
            return 0;
        }
        if(b[s[i]-'A']==a[s[i]-'A']) b[s[i]-'A']=0;
    }
    printf("NO\n");
}