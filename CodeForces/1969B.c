#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[300000];
        scanf("%s",s);
        long long ll=strlen(s),c=0,sum=0;
        for(int i=0;i<ll;i++){
            if(s[i]=='1') c++;
            else if(c>0) sum+=c+1;
        }
        printf("%lld\n",sum);
    }
}