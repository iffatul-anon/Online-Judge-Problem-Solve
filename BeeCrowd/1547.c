#include<stdio.h>
#include<stdlib.h>
int main(){
    int n; 
    scanf("%d",&n);
    while(n--){
        int qt,s,c,min=100,x; 
        scanf("%d %d",&qt,&s);
        for(int i=0;i<qt;i++){
            scanf("%d",&x);
            if(abs(x-s)<min){
                min=abs(x-s);
                c=i+1;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}