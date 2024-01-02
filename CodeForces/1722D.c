#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,sum=0,i,j,k=0;
        scanf("%lld",&n);
        char s[n+1];
        scanf("%s",s);
        for(i=0;i<n;i++){
            if(s[i]=='R') sum+=n-i-1;
            else sum+=i;
        }
        i=0;
        j=n-1;
        while(i<=j){
            while(s[i]=='R' && i<n/2) i++;
            while(s[j]=='L' && j>=n/2) j--;
            if(i>j) break;
            if(i<n-j-1 || j<n/2) {
                sum=sum-i+(n-i-1);
                printf("%lld ",sum);
                k++;
                i++;
            }
            else{
                sum=sum-(n-j-1)+j;
                printf("%lld ",sum);
                k++;
                j--;
            }
        }
        for(i=k;i<n;i++) printf("%lld ",sum);
        printf("\n");
    }
}