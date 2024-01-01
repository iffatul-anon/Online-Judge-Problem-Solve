#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,a,c=0,f=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&a);
            if(a==0) f=1;
            if(a<0) c++;
        }
        if(c%2==1 || f==1) printf("0\n");
        else printf("1\n1 0\n");
    }
}