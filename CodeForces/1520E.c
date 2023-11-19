#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,count=0,count2=0,count3=0,a=0,b=0;
        scanf("%lld",&n);
        char s[n+1];
        scanf("%s",s);
        for(int i=0;i<n;i++) if(s[i]=='*') count2++;
        for(int i=0;i<n;i++){
            if(s[i]=='*') count3++;
            if(count3==(count2+1)/2){
                a=i;
                break;
            }
        }
        for(int i=a+1;i<n;i++){ 
            if(s[i]=='*'){ 
                b++;
                count+=i-a-b;
            }
        }
        b=0;
        for(int i=a-1;i>=0;i--){ 
            if(s[i]=='*'){ 
                b++;
                count+=a-i-b;
            }
        }
        printf("%lld\n",count);
    }
}