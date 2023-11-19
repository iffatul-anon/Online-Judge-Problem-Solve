#include<stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,l;
        scanf("%d %d",&n,&l);
        int a[30]={0},b[30]={0},x,y,ans=0;
        for(int i=0;i<n;i++){
            scanf("%d",&x);
            y=l-1;
            while(x>0){
                x%2==0?a[y]++:b[y]++;
                y--;
                x=x/2;
            }
            for(int j=y;j>=0;j--) a[j]++;
        }
        for(int i=0;i<l;i++){
            if(a[i]>=b[i]) ans=ans*2;
            else ans=ans*2+1;
        }
        printf("%d\n",ans);
    }
    return 0;
}