#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x,count=0;
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            scanf("%d",&x);
            if(x==i) count++;
        }
        printf("%d\n",(count+1)/2);
    }
}