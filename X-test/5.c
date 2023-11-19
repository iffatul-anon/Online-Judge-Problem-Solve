#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d %d",&n,&m);
        int a[n][m];
        long long int r1=0,r2=0,r3=0,r4=0,c1=0,c2=0,c3=0,c4=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                scanf("%d",&a[i][j]);
                if(i==0){
                    r1=r1+a[i][j];
                }
                if(i==1){
                    r2=r2+a[i][j];
                }
                if(i==n-1){
                    r4=r4+a[i][j];
                }
                if(i==n-2){
                    r3=r3+a[i][j];
                }
                if(j==0){
                    c1=c1+a[i][j];
                }
                if(j==1){
                    c2=c2+a[i][j];
                }
                if(j==m-1){
                    c4=c4+a[i][j];
                }
                if(j==m-2){
                    c3=c3+a[i][j];
                }
            }
        }
        long long int anon[6],max;
        anon[0]=r1+c4-a[0][m-1];
        anon[1]=r4+c1-a[n-1][0];
        anon[2]=r2-a[1][0]+c4-a[0][m-1]+a[0][0]-a[1][m-1];
        anon[3]=r3-a[n-2][0]+c1+a[n-1][m-1];
        anon[4]=r1+c3-a[0][m-2]+a[n-1][m-1];
        anon[5]=r1+c4+a[1][m-2]-a[0][m-1];
        max=anon[0];
        for(int i=0;i<6;i++){
            if(max<anon[i]){
                max=anon[i];
            }
        }
        printf("%lld\n",max);
    }
    return 0;
}