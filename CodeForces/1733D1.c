#include<stdio.h>
#include<string.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n,x,y,count=0,flag=0;
        scanf("%lld %lld %lld",&n,&x,&y);
        char s1[n+1],s2[n+1];
        scanf("%s %s",s1,s2);
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i]){
                count++;
                if(s1[i+1]!=s2[i+1]) flag=1;
            }
        }
        if(count%2!=0) printf("-1\n");
        else if(count==2 && flag==1 && x<=y*2) printf("%lld\n",x);
        else if(count==2 && flag==1 && x>y*2) printf("%lld\n",y*2);
        else printf("%lld\n",(count/2)*y);
    }
}