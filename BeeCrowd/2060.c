#include <stdio.h>
 
int main() {
 
   int n,x,i,m=0,m1=0,m2=0,m3=0;
   scanf("%d",&n);
   for(i=1;i<=n;i++){
       scanf("%d",&x);
       if(x%2==0){
           m = m+1;
       }
       if(x%3==0){
           m1 =m1+ 1;
       }
       if(x%4==0){
           m2 =m2+ 1;
       }
       if(x%5==0){
           m3 =m3+ 1;
       }
       
   }
   printf("%d Multiplo(s) de 2\n",m);
   printf("%d Multiplo(s) de 3\n",m1);
   printf("%d Multiplo(s) de 4\n",m2);
   printf("%d Multiplo(s) de 5\n",m3);
    return 0;
}