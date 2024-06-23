#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int x,a[32]={0},y=0;
        scanf("%d",&x);
        while(x){
            a[y++]=x%2;
            x/=2;
        }
        for(int i=0;i<31;i++){
            if(a[i] && a[i+1]){
                a[i]=-1;
                for(int j=i+1;j<32;j++) {
                    if(a[j]) a[j]=0;
                    else{
                        a[j]=1;
                        i=j-1;
                        break;
                    }
                }
            }
        }
        printf("32\n");
        for(int i=0;i<32;i++) printf("%d ",a[i]);
        printf("\n");
    }
}