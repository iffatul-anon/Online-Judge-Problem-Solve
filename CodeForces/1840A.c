#include<stdio.h>
#include<string.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char s[n+1],a;
        scanf("%s",s);
        a=s[0];
        for(int i=1;i<n;i++){
            if(a==s[i]){
                printf("%c",a);
                a=s[i+1];
                i++;
            }
        }
        printf("\n");
    }
    return 0;
}