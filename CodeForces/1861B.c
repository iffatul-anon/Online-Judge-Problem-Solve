#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char a[100000],b[100000];
        scanf("%s %s",a,b);
        int l=strlen(a),flag=0;
        for(int i=1;i<l;i++){
            if(a[i]=='1' && b[i]=='1' && a[i-1]=='0' && b[i-1]=='0'){
                flag=1;
                break;
            }
        }
        if(flag==1) printf("YES\n");
        else printf("NO\n");
    }
}