#include<stdio.h>
int main(){
    while(1){
        int b,n;
        scanf("%d %d",&b,&n);
        if(b==0){
            return 0;
        }
        int a[b];
        for(int i=0;i<b;i++){
            scanf("%d",&a[i]);
        }
        int flag=0;
        for(int i=0;i<n;i++){
            int x,y,z;
            scanf("%d %d %d",&x,&y,&z);
            a[x-1]=a[x-1]-z;
            a[y-1]=a[y-1]+z;
        }
        for(int i=0;i<b;i++){
            if(a[i]<0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("S\n");
        }
        else{
            printf("N\n");
        }
    }
}