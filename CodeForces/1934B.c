#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,c=0,c2=0,c3=0,c4=0,n2,n3,n4;
        scanf("%lld",&n);
        n2=n3=n4=n;
        c=n/15;
        n=n%15;
        if(n==14) c+=3;
        else if(n==13) c+=2;
        else if(n==12) c+=2;
        else if(n==11) c+=2;
        else if(n==10) c+=1;
        else if(n==9) c+=2;
        else if(n==8) c+=3;
        else if(n==7) c+=2;
        else if(n==6) c+=1;
        else if(n==5) c+=3;
        else if(n==4) c+=2;
        else if(n==3) c+=1;
        else if(n==2) c+=2;
        else if(n==1) c+=1;
        if(n2<15) printf("%d\n",c);
        else{
            c2=(n2/15)-1;
            n2=(n2%15)+15;
            c2+=n2/10;
            n2=n2%10;
            if(n2==9) c2+=2;
            else if(n2==8) c2+=3;
            else if(n2==7) c2+=2;
            else if(n2==6) c2+=1;
            else if(n2==5) c2+=3;
            else if(n2==4) c2+=2;
            else if(n2==3) c2+=1;
            else if(n2==2) c2+=2;
            else if(n2==1) c2+=1;

            if(c>c2) c=c2; 

            printf("%d\n",c);

        }
    }
}