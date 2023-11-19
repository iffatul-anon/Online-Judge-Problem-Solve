#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int l,r,flag=0;
        scanf("%d %d",&l,&r);
        if(r<4) printf("-1\n");
        else if(l!=r) printf("%d %d\n",r/2,r/2);
        else{
            for(int i=2;i<=sqrt(l);i++){
                if(l%i==0){
                    flag=i;
                    break;
                }
            }
            if(flag==0) printf("-1\n");
            else printf("%d %d\n",flag,l-flag);
        }
    }
}