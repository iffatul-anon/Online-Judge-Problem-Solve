#include<stdio.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int xa,xb,xc,ya,yb,yc,count=-1;
        scanf("%d %d %d %d %d %d",&xa,&ya,&xb,&yb,&xc,&yc);
        if((xa>=xb && xa<=xc) || (xa<=xb && xa>=xc)) count++;
        else {
            if(abs(xa-xb)<abs(xa-xc)) count+=abs(xa-xb)+1;
            else count+=abs(xa-xc)+1;
        }
        if((ya>=yb && ya<=yc) || (ya<=yb && ya>=yc)) count++;
        else{
            if(abs(ya-yb)<abs(ya-yc)) count+=abs(ya-yb)+1;
            else count+=abs(ya-yc)+1;
        }
        printf("%d\n",count);
    }
}