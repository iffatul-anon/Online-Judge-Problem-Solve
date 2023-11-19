#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    double S1=0,S2=0,B1=0,B2=0,A1=0,A2=0;
    while(n--){
        char s[100];
        double s1,s2,b1,b2,a1,a2;
        scanf("%s",&s);
        scanf("%lf %lf %lf",&s1,&b1,&a1);
        scanf("%lf %lf %lf",&s2,&b2,&a2);
        S1=S1+s1;
        S2=S2+s2;
        B1=B1+b1;
        B2=B2+b2;
        A1=A1+a1;
        A2=A2+a2;
    }
    printf("Pontos de Saque: %.2lf %%.\n",(S2/S1)*100);
    printf("Pontos de Bloqueio: %.2lf %%.\n",(B2/B1)*100);
    printf("Pontos de Ataque: %.2lf %%.\n",(A2/A1)*100);
}