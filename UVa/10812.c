#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int s,d,x,y,z;
        scanf("%d %d",&s,&d);
        if((s+d)%2==0 && s>=d){
            x=(s+d)/2;
            y=s-x;
            if(x>y) printf("%d %d\n",x,y);
            else printf("%d %d\n",y,x);
        }
        else printf("impossible\n");
    }
}