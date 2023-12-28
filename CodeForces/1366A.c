#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,x,y,z,c=0;
        scanf("%d %d",&a,&b);
        while(1){
            if((a==1 && b==1) || a==0 || b==0) break;
            if(a>b){
                x=a/2;
                if(x==1) y=1;
                else y=x/2;
                a-=y*2;
                if(b>=y) {
                    b-=y;
                    c+=y;
                }
                else{
                    c+=b;
                    b=0;
                }
            }
            else{
                x=b/2;
                if(x==1) y=1;
                else y=x/2;
                b-=y*2;
                if(a>=y){
                    a-=y;
                    c+=y;
                }
                else{
                    c+=a;
                    a=0;
                }
            }
        }
        printf("%d\n",c);
    }
}