#include<stdio.h>
int main (){
double n;
scanf("%lf",&n);
int n2 = (int)n;
int n3 = (n - n2)*100;
printf("NOTAS:\n");
int a=n2/100;
printf("%d nota(s) de R$ 100.00\n",a);
int aa=n2%100;
int b=aa/50;
printf("%d nota(s) de R$ 50.00\n",b);
int bb=aa%50;
int c=bb/20;
printf("%d nota(s) de R$ 20.00\n",c);
int cc=bb%20;
int d=cc/10;
printf("%d nota(s) de R$ 10.00\n",d);
int dd=cc%10;
int e=dd/5;
printf("%d nota(s) de R$ 5.00\n",e);
int ee=dd%5;
int f=ee/2;
printf("%d nota(s) de R$ 2.00\n",f);

printf("MOEDAS:\n");
int ff=ee%2;
int g=ff/1;
printf("%d moeda(s) de R$ 1.00\n",g);

int h=n3/50;
printf("%d moeda(s) de R$ 0.50\n",h);
n3=n3%50;
int i=n3/25;
printf("%d moeda(s) de R$ 0.25\n",i);
n3=n3%25;
int j=n3/10;
printf("%d moeda(s) de R$ 0.10\n",j);
n3=n3%10;
int k=n3/5;
printf("%d moeda(s) de R$ 0.05\n",k);
n3=n3%5;
int l=n3/1;
printf("%d moeda(s) de R$ 0.01\n",l);

    return 0;
}