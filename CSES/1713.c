#include<stdio.h>
int main(){
    int n,x,c;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&x);
        c=2;
        if(x==1) c=1;
        for(int i=2;i*i<=x;i++){
            if(x%i==0) c+=2;
            if(x%i==0 && x/i==i) c--;
        }
        printf("%d\n",c);
    }
}