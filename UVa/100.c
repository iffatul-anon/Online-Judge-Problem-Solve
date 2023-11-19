#include<stdio.h>
int main(){
    int a,b;
    while(EOF!=scanf("%d %d",&a,&b)){
        printf("%d %d ",a,b);
        int max=0;
        if(a>b){
            int tem=a;
            a=b;
            b=tem;
        }
        for(int i=a;i<=b;i++){
            int n=i,c=1;
            while(n!=1){
                c++;
                if(n%2==0){
                    n=n/2;
                }
                else{
                    n=(3*n)+1;
                }
            }
            if(max<c){
                max=c;
            }
        }
        printf("%d\n",max);
    }
    return 0;
}