#include<stdio.h>
#include<math.h>
int main(){
    while(1){
        int n,v;
        scanf("%d %d",&n,&v);
        if(n==0){
            return 0;
        }
        int sum;
        for(int i=v;i>=1;i--){
            int a=i;
            sum=0;
            while(sum<n && a>0){
                for(int j=1;j<=a;j++){
                    sum=sum+a;
                    if(sum>=n){
                        break;
                    }
                }
                a--;
                if(sum>=n){
                    break;
                }
            }
            if(sum<=n){
                break;
            } 
        }
        if(sum==n){
            printf("possivel\n");
        }
        else{
            printf("impossivel\n");
        }
    }
}