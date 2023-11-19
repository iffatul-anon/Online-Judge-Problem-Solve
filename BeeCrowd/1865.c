#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char a[100];
        int n;
        scanf("%s %d",&a,&n);
        if(strcmp(a,"Thor")==0){
            printf("Y\n");
        }
        else{
            printf("N\n");
        }
    }
    return 0;
}