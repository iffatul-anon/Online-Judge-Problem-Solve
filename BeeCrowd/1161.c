#include<stdio.h>

int main(){

long long int M,N,f1,f2,sum,i,j,k;

while(scanf("%lld %lld",&M,&N) != EOF){

    f1=1;
    f2=1;
    sum=0;
for(j=1; j<=M; j++){
    f1=f1*j;
}
for(k=1;k<=N;k++){
    f2=f2*k;
}
sum=f1+f2;
printf("%lld\n",sum);
}
    return 0;
}