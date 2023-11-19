#include <stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,a,p,min=1000000;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&a);
            if(a<min) {
                min=a;
                p=i+1;
            }
        }
        printf("%d\n",p);
    }
}