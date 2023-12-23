#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,c1=0,c2=0,c3=0,c4=0;
        scanf("%d",&n);
        int x[n],y[n];
        for(int i=0;i<n;i++) scanf("%d %d",&x[i],&y[i]);
        for(int i=0;i<n;i++){
            if(x[i]<=0) c1++;
            if(x[i]>=0) c2++;
            if(y[i]<=0) c3++;
            if(y[i]>=0) c4++;
        }
        if(c1==n || c2==n || c3==n || c4==n) printf("YES\n");
        else printf("NO\n");
    }
}