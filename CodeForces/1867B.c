#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,c=0,a=0;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",s);
        for(int i=0;i<n/2;i++) if(s[i]!=s[n-i-1]) a++;
        if(n%2==0 && a%2==0){
            for(int i=0;i<a;i++) printf("0");
            for(int i=a;i<n-a+1;i++){ 
                if(i%2==0) printf("1");
                else printf("0");
            }
            for(int i=n-a+1;i<n+1;i++) printf("0");
            printf("\n");
        }
        else if(n%2==0){
            for(int i=0;i<a;i++) printf("0");
            for(int i=a;i<n-a+1;i++){ 
                if(i%2==1) printf("1");
                else printf("0");
            }
            for(int i=n-a+1;i<n+1;i++) printf("0");
            printf("\n");
        }
        else{
            for(int i=0;i<a;i++) printf("0");
            for(int i=a;i<n-a+1;i++) printf("1");
            for(int i=n-a+1;i<n+1;i++) printf("0");
            printf("\n");
        }
    }
}