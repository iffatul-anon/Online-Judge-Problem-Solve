#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,min;
        scanf("%d",&n);
        min=n-1;
        for(int i=2;i*i<=n;i++) {
            if(n%i==0 && (n/i)+i-2<min) min=(n/i)+i-2;
            else if((n/i)+i-1<min) min=(n/i)+i-1;
        }
        printf("%d\n",min);
    }
}