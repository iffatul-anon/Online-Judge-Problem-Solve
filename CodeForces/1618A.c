#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int b[10],a,c,d,x;
        for(int i=0;i<7;i++) scanf("%d",&b[i]);
        a=b[0];
        x=b[6]-a;
        for(int i=1;i<6;i++){
            for(int j=i+1;j<6;j++){
                if(b[i]+b[j]==x){
                    c=b[i];
                    d=b[j];
                    break;
                }
            }
        }
        printf("%d %d %d\n",a,c,d);
    }
}
