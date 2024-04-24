#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n],c=0,anon,b[n+5];
        for(int i=0;i<=n+3;i++) b[i]=0;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            b[a[i]]++;
        }
        for(int i=0;i<=n;i++){
            if(b[i]==1) c++;
            if(c==2 || b[i]==0){
                anon=i;
                break;
            }
        }
        printf("%d\n",anon);
    }
}