#include<stdio.h>
#include<string.h>
int main(){
    int n;
    while(EOF!=scanf("%d",&n)){
        int size1[100]={0};
        int size2[100]={0};
        for(int i=0;i<n;i++){
            int m;
            char c;
            scanf("%d %c",&m,&c);
            if(c=='E'){
                size1[m]++;
            }
            else{
                size2[m]++;
            }
        }
        int count=0;
        for(int i=30;i<=60;i++){
            if(size1[i]>0 && size2>0){
                if(size1[i]<size2[i]){
                    count=count+size1[i];
                }
                else{
                    count=count+size2[i];
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}