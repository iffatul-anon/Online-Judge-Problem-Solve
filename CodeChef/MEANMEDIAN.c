#include<stdio.h>
int main(){
    int t,x,y;
    int a,b,c;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&x,&y);
        if(x==y){
            printf("%d %d %d\n",x,x,x);
        }
        else{
            b=y;
            x=x*3;
            c=x-b;
            a=x-(b+c);
            if(c>=b){
                if(a>b){
                    printf("%d %d %d\n",a-(a-b),b,c+(a-b));
                }
                else{
                    printf("%d %d %d\n",a,b,c);
                }
            }
            else{
                if(a<b){
                    printf("%d %d %d\n",c-(b-a),b,a+(b-a));
                }
                else{
                    printf("%d %d %d\n",c,b,a);  
                } 
            }   
        }
    }
}