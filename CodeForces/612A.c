#include<stdio.h>
#include<string.h>
int main(){
    int n,p,q;
    scanf("%d %d %d",&n,&p,&q);
    char s[n+1];
    scanf("%s",s);
    int x=n/p;
    int y=n%p;
    while(y%q!=0){
        y+=p;
        x--;
        if(x==0) break;
    }
    if(x==0 && n%q!=0) printf("-1\n");
    else{
        printf("%d\n",x+(y/q));
        for(int i=0;i<n;i++){
            printf("%c",s[i]);
            if((i+1)%p==0 && i<p*x) printf("\n");
            else if((i+1-(p*x))%q==0 && i>=p*x) printf("\n");
        }
    }
}