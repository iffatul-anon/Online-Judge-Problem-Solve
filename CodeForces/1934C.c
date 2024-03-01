#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,d,d2,d3,d4,x2,x3,y2,y3;
        scanf("%d %d",&n,&m);
        printf("? 1 1\n");
        fflush(stdout);
        scanf("%d",&d);
        if(d==0) printf("! 1 1\n");
        else{
            if(m>=d+1){
                x2=1;
                y2=d+1;
            }
            else{
                x2=d+1-m+1;
                y2=m;
            }
            printf("? %d %d\n",x2,y2);
            fflush(stdout);
            scanf("%d",&d2);
            if(d2==0) printf("! %d %d\n",x2,y2);
            else{
                if(n>=d+1){
                    x3=d+1;
                    y3=1;
                }
                else{
                    x3=n;
                    y3=d+1-n+1;
                }
                printf("? %d %d\n",x3,y3);
                fflush(stdout);
                scanf("%d",&d3);
                if(d3==0) printf("! %d %d\n",x3,y3);
                else{
                    printf("? %d %d\n",x2+(d2/2),y2-(d2/2));
                    fflush(stdout);
                    scanf("%d",&d4);
                    if(d4==0) printf("! %d %d\n",x2+(d2/2),y2-(d2/2));
                    else printf("! %d %d\n",x3-(d3/2),y3+(d3/2));
                }
            }
        }
        fflush(stdout);
    }
}