#include<stdio.h>
int main(){
    int N,i,a,Total=0,total1=0,total2=0,total3=0;
    char c;
    float p1,p2,p3,Total5;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        scanf("%d %c",&a,&c);
        Total=Total+a;
        if(c=='C'){
            total1=total1+a;
        }
        if(c=='R'){
            total2=total2+a;
        }
        if(c=='S'){
            total3=total3+a;
        }
    }
    Total5 = Total;
    p1=(total1/Total5)*100;
    p2=(total2/Total5)*100;
    p3=(total3/Total5)*100;
    printf("Total: %d cobaias\n",Total);
    printf("Total de coelhos: %d\n",total1);
    printf("Total de ratos: %d\n",total2);
    printf("Total de sapos: %d\n",total3);
    printf("Percentual de coelhos: %.2f %%\n",p1);
    printf("Percentual de ratos: %.2f %%\n",p2);
    printf("Percentual de sapos: %.2f %%\n",p3);

    return 0;
}