#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,f;
        scanf("%d %d",&a,&b);
        if(a==1) a=2;
        for(int i=a;i<=b;i++){
            f=0;
            for(int j=2;j*j<=i;j++){
                if(i%j==0){
                    f=1;
                    break;
                }
            }
            if(f==0) printf("%d\n",i); 
        }
        printf("\n");
    }
}