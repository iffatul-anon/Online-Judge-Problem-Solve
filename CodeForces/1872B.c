#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int d,s,a[1000]={0};
        for(int i=0;i<n;i++) {
            scanf("%d %d",&d,&s);
            a[(s-1)/2+d]=1;
        }
        for(int i=0;i<1000;i++){
            if(a[i]==1) {
                printf("%d\n",i);
                break;
            }
        }
    }
}