#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k,i,count1=0,count2=0;
        scanf("%d %d",&n,&k);
        int c[n];
        for(i=0;i<n;i++) scanf("%d",&c[i]);
        for(i=0;i<n;i++) {
            if(c[i]==c[0]) count1++;
            if(count1==k) break;
        }
        for(i=i+1;i<n;i++) {
            if(c[i]==c[n-1]) count2++;
            if(count2==k) break;
        }
        if(count2==k || (c[0]==c[n-1] && count1==k)) printf("YES\n");
        else printf("NO\n");
    }
}