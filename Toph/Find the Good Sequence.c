#include <stdio.h>

int main() {
    int n,count=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    b[n-1]=0;
    for(int i=n-1;i>=0;i--){
        if(a[i]-a[i-1]>1) {
            count++;
        }
        else count=0;
        if(count>0) b[i-1]=count+1;
        else b[i-1]=0;
    }
    for(int i=0;i<n;i++) printf("%d\n",b[i]);
}