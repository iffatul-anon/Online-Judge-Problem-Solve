#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,c=1,j;
        scanf("%d",&n);
        char s1[n+1],s2[n+1];
        scanf("%s",s1);
        scanf("%s",s2);
        for(int i=0;i<n;i++){
            printf("%c",s1[i]);
            if((s1[i+1]=='0' || s2[i]=='1') && i<n-1) continue;
            else{
                for(j=i-1;j>=0;j--){
                    if(s1[j+1]==s2[j]) c++;
                    else break;
                }
                for(i=i;i<n;i++) printf("%c",s2[i]);
                printf("\n");
                break;
            }
        }
        printf("%d\n",c);
    }
}