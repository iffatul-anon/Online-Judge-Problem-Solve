#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int c,f=0;
        scanf("%d",&c);
        double m,n,sum1=0,sum2=0;
        for(int j=0;j<c;j++){
            scanf("%lf %lf",&m,&n);
            if(m>=80) sum1+=4.00*n;
            else if(m>=75) sum1+=3.75*n;
            else if(m>=70) sum1+=3.50*n;
            else if(m>=65) sum1+=3.25*n;
            else if(m>=60) sum1+=3.00*n;
            else if(m>=55) sum1+=2.75*n;
            else if(m>=50) sum1+=2.50*n;
            else if(m>=45) sum1+=2.25*n;
            else if(m>=40) sum1+=2.00*n;
            else f++;
            sum2+=n;
        }
        if(f==1) printf("Case %d: Sorry, you have failed in 1 course!\n",i);
        else if(f>1) printf("Case %d: Sorry, you have failed in %d courses!\n",i,f);
        else printf("Case %d: %0.2lf\n",i,sum1/sum2);
    }
}