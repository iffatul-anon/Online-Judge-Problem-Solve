#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,a,b,max=0,ans;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d %d",&a,&b);
            if(a<=10 && b>max){
                max=b;
                ans=i+1;
            }
        }
        printf("%d\n",ans);
    }
}