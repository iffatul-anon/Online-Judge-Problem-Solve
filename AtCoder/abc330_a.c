#include<stdio.h>
int main(){
    int n,l,a,c=0;
    scanf("%d %d",&n,&l);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        if(a>=l) c++;
    }
    printf("%d\n",c);
}