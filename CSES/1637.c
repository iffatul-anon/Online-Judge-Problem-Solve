#include <stdio.h> 
int main(){
    int n,m,c=0,p=0;
    scanf("%d",&n);
    while(n>0){
        c++;
        m=n;
        p=0;
        while(m>0){
            if(m%10>p) p=m%10;
            m=m/10;
        }
        n=n-p;
    }
    printf("%d\n",c);
}