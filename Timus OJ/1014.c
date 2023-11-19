#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int x[10]={0},y=2;
    while(1){
        if(n<10){
            if(n==4){
                x[2]++;
                x[2]++;
            }
            else if(n==6){
                x[3]++;
                x[2]++;
            }
            else if(n==8){
                x[2]++;
                x[2]++;
                x[2]++;
            }
            else if(n==9){
                x[3]++;
                x[3]++;
            }
            else{
                x[n]++;
            }
            break;
        }
        else if(n%y==0){
            n=n/y;
            if(y==4){
                x[2]++;
                x[2]++;
            }
            else if(y==6){
                x[3]++;
                x[2]++;
            }
            else if(y==8){
                x[2]++;
                x[2]++;
                x[2]++;
            }
            else if(y==9){
                x[3]++;
                x[3]++;
            }
            else{
                x[y]++;
            }
        }
        else{
            y++;
        }
        if(y==10){
            break;
        }
    }
    if(n>9){
        printf("-1\n");
    }
    else if(n==0){
        printf("10\n");
    }
    else{
        if(x[4]>x[2]){
            x[4]=x[4]-x[2];
            x[8]=x[8]+x[2];
            x[2]=0;
        }
        else{
            x[2]=x[2]-x[4];
            x[8]=x[8]+x[4];
            x[4]=0;
        }
        x[8]=x[8]+(x[2]/3);
        x[2]=x[2]%3;
        x[9]=x[3]/2;
        x[3]=x[3]%2;
        if(x[3]==1 && x[2]>0){
            x[6]++;
            x[3]--;
            x[2]--;
        }
        x[4]=x[2]/2;
        x[2]=x[2]%2;
        for(int i=0;i<10;i++){
            for(int j=0;j<x[i];j++){
                printf("%d",i);
            }
        }
    }
    return 0;
}