#include<stdio.h>
int main(){
    while(1){
        int q,d,p;
        scanf("%d",&q);
        if(q==0){
            return 0;
        }
        scanf("%d %d",&d,&p);
        int anon=(d*q*p)/(p-q);
        if(anon>1){
            printf("%d paginas\n",anon);
        }
        else{
            printf("%d pagina\n",anon);
        }
    }
}