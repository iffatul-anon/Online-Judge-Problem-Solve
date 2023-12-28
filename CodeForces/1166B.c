#include<stdio.h>
int main(){
    int k,f=0;
    scanf("%d",&k);
    for(int i=5;i*i<=k;i++){
        if(k%i==0){
            f=i;
            break;
        }
    }
    if(f==0 || k/f<5) printf("-1\n");
    else{
        printf("aeuoi");
        for(int i=5;i<k/f;i++) printf("a");
        printf("eaoiu");
        for(int i=5;i<k/f;i++) printf("e");
        printf("ouiea");
        for(int i=5;i<k/f;i++) printf("o");
        printf("uieao");
        for(int i=5;i<k/f;i++) printf("u");
        printf("ioaue");
        for(int i=5;i<k/f;i++) printf("i");
        for(int i=5;i<f;i++) {
            printf("aeoui");
            for(int j=5;j<k/f;j++) printf("a");
        }
        printf("\n");
    }
}