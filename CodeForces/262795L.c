#include<stdio.h>
int main(){
    int n,k,x,y=0;
    scanf("%d %d",&n,&k);
    int a[101]={0};
    for(int i=1;i<=n;i++){
        scanf("%d",&x);
        if(a[x]==0) {
            a[x]=i;
            y++;
        }
    }
    if(y<k) printf("NO\n");
    else{
        printf("YES\n");
        for(int i=1;i<=100 && k;i++){
            if(a[i]!=0) {
                printf("%d ",a[i]);
                k--;
            }
        }
        printf("\n");
    }
}