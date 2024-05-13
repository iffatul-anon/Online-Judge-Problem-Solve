#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,c,d,count=0;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(a>b){
            int tem=a;
            a=b;
            b=tem;
        }
        for(int i=a+1;i<b;i++) if(i==c || i==d) count++;
        if(count==1) printf("YES\n");
        else printf("NO\n");
    }
} 