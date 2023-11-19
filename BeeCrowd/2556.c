#include<stdio.h>
int main(){
    int n;
    while(EOF!=scanf("%d",&n)){
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]>a[j]){
                    int tem=a[j];
                    a[j]=a[i];
                    a[i]=tem;
                }
            }
        }
        printf("%d %d\n",n/2,a[n/2]-a[(n/2)-1]);
    }
    return 0;
}