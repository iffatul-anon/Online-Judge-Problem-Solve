#include<stdio.h>
#include<string.h>
int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        int n,sum=0,c=0;
        scanf("%d",&n);
        char s[n+1];
        int a[n];
        scanf("%s",s);
        for(int i=0;i<n;i++) {
            sum+=s[i]-'0';
            a[i]=sum;
        }
        for(int i=n-1;i>=0;i--){
            s[i]=((a[i]+c)%10)+'0';
            c=(a[i]+c)/10;
        }
        if(c>0) printf("%d%s\n",c,s);
        else{
            for(int i=0;i<n;i++){
                if(s[i]>'0'){
                    for(int j=i;j<n;j++) printf("%c",s[j]);
                    printf("\n");
                    break;
                }
            }
        }
    }
}