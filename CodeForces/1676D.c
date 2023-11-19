#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d %d",&n,&m);
        long long sum=0,max=0;
        int x[n][m],a,b;
        for(int i=0;i<n;i++) for(int j=0;j<m;j++) scanf("%d",&x[i][j]);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                sum=x[i][j];
                a=i-1;
                b=j-1;
                while(a>=0 && b>=0){
                    sum+=x[a][b];
                    a--;
                    b--;
                }
                a=i-1;
                b=j+1;
                while(a>=0 && b<m){
                    sum+=x[a][b];
                    a--;
                    b++;
                }
                a=i+1;
                b=j-1;
                while(a<n && b>=0){
                    sum+=x[a][b];
                    a++;
                    b--;
                }
                a=i+1;
                b=j+1;
                while(a<n && b<m){
                    sum+=x[a][b];
                    a++;
                    b++;
                }
                if(sum>max) max=sum;
            }
        }
        printf("%lld\n",max);
    }
}