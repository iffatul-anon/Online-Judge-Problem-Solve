#include<stdio.h>
int main(){

int d1,d2,h1,h2,m1,m2,s1,s2,W,X,Y,Z;
printf("Dia ");
scanf("%d",&d1);
scanf("%d : %d : %d",&h1,&m1,&s1);
printf("Dia ");
scanf("%d",&d2);
scanf("%d : %d : %d",&h2,&m2,&s2);

W=d2-d1-1;
X=(24-(h1+1))+h2;
Y=(60-(m1+1))+m2;
Z=(60-s1)+s2;

if(Z>=60){
    Y=Y+1;
    Z=Z-60;
}
if(Y>=60){
    X=X+1;
    Y=Y-60;
}
if(X>=24){
    W=W+1;
    X=X-24;
}

printf("%d dia(s)\n",W);
printf("%d hora(s)\n",X);
printf("%d minuto(s)\n",Y);
printf("%d segundo(s)\n",Z);
    return 0;
}