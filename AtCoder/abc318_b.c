#include<stdio.h>
int main(){
    int n,a,b,c,d,count=0;
    scanf("%d",&n);
    int aa[200][200];
    for(int i=0;i<200;i++) for(int j=0;j<200;j++) aa[i][j]=0;
    for(int i=0;i<n;i++){
        scanf("%d %d %d %d",&a,&b,&c,&d);
        for(int j=a;j<b;j++){
            for(int k=c;k<d;k++) {
                if(aa[j][k]==0){
                    aa[j][k]=1;
                    count++;
                }
            }
        }
    }
    printf("%d\n",count);
}