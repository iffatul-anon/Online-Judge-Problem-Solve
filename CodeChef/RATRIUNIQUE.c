#include<stdio.h>
int main(){
    int t,n,k;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&n,&k);
        int a[n];
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        for(int j=0;j<n;j++){
            for(int x=j+1;x<n;x++){
                if(a[j]==a[x]){
                    a[x]=a[n-1];
                    x--;
                    n--;
                }
            }
        }
        int count=0;
        for(int j=0;j<n;j++){
            if(a[j]>k){
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}