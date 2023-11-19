#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,a,q,count1=0,count3=0,max=0;
        scanf("%d %d %d",&n,&a,&q);
        char s[q+1];
        scanf("%s",s);
        for(int i=0;i<q;i++){
            if(s[i]=='+') count1++;
            if(s[i]=='-') count3++;
            if(a+count1-count3==n) max=n;
        }
        if(max==n || a==n) printf("YES\n");
        else if(count1+a<n) printf("NO\n");
        else printf("MAYBE\n");
    }
}