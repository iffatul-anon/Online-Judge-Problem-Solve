#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a[n];
        int count=0;
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
            if(a[j]%2==0){
                count++;
            }
        }  
        if(count==n){
            printf("0\n");
        }
        else{
            printf("%d\n",count);
        }
    }
    return 0;
}