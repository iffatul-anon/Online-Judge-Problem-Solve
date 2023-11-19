#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int min=n-1,a=1,b=n-1;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){ 
                if(min>n-i){ 
                    min=n-i;
                    a=i;
                    b=n-i;
                }
                if(min>n-(n/i)){
                    min=n-(n/i);
                    a=n/i;
                    b=n-a;
                }
            }
        }
        printf("%d %d\n",a,b);
    }
}