#include<stdio.h>
#include<string.h>
int main (){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        char s1[n+1];
        char s2[n+1];
        scanf("%s",&s1);
        scanf("%s",&s2);
        int flag=0;
        for(int j=0;j<n;j++){
            if((s1[j]=='R' && s2[j]!='R') || (s1[j]!='R' && s2[j]=='R')){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}