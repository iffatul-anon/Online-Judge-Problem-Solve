#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[1000000],s2[1000000];
        scanf("%s",s);
        long long n,a,b,c,d,e,f,l=strlen(s),c1=0,x=0;
        scanf("%lld",&n);
        a=(l*(l+1))/2;
        b=a-n+1;
        c=(sqrt((b*8)+1)-1)/2;
        d=(c*(c+1))/2;
        if(b!=d) c++;
        d=(c*(c+1))/2;
        e=l-c;    
        f=d-b+1; 
        for(int i=0;i<l-1;i++){
            if(s[i]<=s[i+1] || c1==e) s2[x++]=s[i];
            else c1++;
            while(x>0 && c1<e && s[i+1]<s2[x-1]){
                x--;
                c1++;
            }
        }   
        s2[x++]=s[l-1];
        s2[x]=0;
        printf("%c",s2[f-1]);
    }
}