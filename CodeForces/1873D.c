#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
       int n,k;
       scanf("%d %d",&n,&k);
       char s[n+1];
       scanf("%s",s);
       int f1=-1,c=0;
       for(int i=0;i<n;i++){
            if(s[i]=='B' && f1==-1) f1=i;
            if(f1!=-1 && i-f1+1==k){
                f1=-1;
                c++;
            }
       }
       if(f1!=-1) c++;
       printf("%d\n",c);
    }
}