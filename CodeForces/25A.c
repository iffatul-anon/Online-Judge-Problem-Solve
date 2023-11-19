#include<stdio.h>
int main(){
    int n,a,x=-1,y=-1,c1=0,c2=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        if(a%2==0) {
            c1++;
            x=i+1;
        }
        else {
            c2++;
            y=i+1;
        }
    }
    if(c1==1) printf("%d\n",x);
    else printf("%d\n",y);
}