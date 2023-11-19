#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n],min=1000000000;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(i!=0 && min>a[i]-a[i-1]) min=a[i]-a[i-1];
        }  
        if(min<0) printf("0\n");
        else printf("%d\n",min/2+1);
    }
}