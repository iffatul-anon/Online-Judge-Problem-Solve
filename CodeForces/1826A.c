#include<stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(a[j]>i) count++;
            }
            if(count==i) {
                printf("%d\n",count);
                break;
            }
        }
        if(i==n) printf("-1\n");
    }
}