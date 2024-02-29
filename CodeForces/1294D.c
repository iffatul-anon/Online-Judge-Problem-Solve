#include<stdio.h>
int main(){
    int q,x,y,mex=0,min,anon;
    scanf("%d %d",&q,&x);
    int a[q+1],b[q+1];
    for(int i=0;i<=q;i++) a[i]=b[i]=0;
    for(int j=0;j<q;j++){
        scanf("%d",&y);
        if(x>600){
            for(int i=y%x;i<=q;i+=x) {
                if(a[i]==0) {
                    a[i]=1;
                    break;
                }
            }
            while(a[mex]) mex++;
            printf("%d\n",mex);
        }
        else{
            b[y%x]++;
            min=q;
            for(int i=0;i<x;i++) {
                if(b[i]<min) {
                    min=b[i];
                    anon=i;
                }
            }
            printf("%d\n",(min*x)+anon);
        }
    }
}