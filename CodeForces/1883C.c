#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k,a,x=0,m=10;
        scanf("%d %d",&n,&k);
        for(int i=0;i<n;i++){
            scanf("%d",&a);
            if(a%2==0) x++;
            if(a%k==0) m=0;
            if(k-(a%k)<m) m=k-(a%k);
        }
        if(x>1 && k==4) m=0; 
        else if(x==1 && k==4 && m>1) m=1;
        else if(k==4 && n-x>1 && m>2) m=2;
        printf("%d\n",m);
    }
}