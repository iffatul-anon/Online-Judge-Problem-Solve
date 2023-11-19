#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        char a[10000],b[10000];
        scanf("%s %s",&a,&b);
        int l1=strlen(a);
        int l2=strlen(b);
        if(l2>l1){
            printf("nao encaixa\n");
        }
        else{
            int flag=0;
            l1--;
            l2--;
            while(l2>=0){
                if(b[l2--]!=a[l1--]){
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                printf("nao encaixa\n");
            }
            else{
                printf("encaixa\n");
            }
        }        
    }
    return 0;
}