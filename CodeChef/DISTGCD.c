#include<stdio.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,c=0,x;
        scanf("%d %d",&a,&b);
        x=abs(a-b);
        for(int i=1;i*i<=x;i++){
            if(x%i==0) {
                c+=2;
                if(i==x/i) c--;
            }
        }
        printf("%d\n",c);
    }
}