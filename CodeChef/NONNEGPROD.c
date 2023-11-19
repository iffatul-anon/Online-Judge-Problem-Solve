#include<stdio.h>
int main(){
    int t,n,a;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int count=0,flag=0;
        for(int j=0;j<n;j++){
            scanf("%d",&a);
            if(a<0){
                count++;
            }
            if(a==0){
                flag=1;
            }
        }
        if(flag==1){
            printf("0\n");
        }
        else{
            if(count%2==0){
                printf("0\n");
            }
            else{
                printf("1\n");
            }
        }
    }
    return 0;
}