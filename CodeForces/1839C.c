#include <stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        if(a[n-1]==1){
            printf("NO\n");
        }
        else{
            int b[n],x=0,y=0;
            printf("YES\n");
            for(int i=0;i<n;i++){
                y--;
                if(a[i]==2){
                    continue;
                }
                if(a[i]==0 || y>0){
                    b[x++]=0;
                }
                else{
                    y=0;
                    for(int j=i;j<n;j++){
                        y++;
                        if(a[j]==0){
                            b[x++]=y-1;
                            a[i]=2;
                            break;
                        }
                    }
                }
            }
            for(int i=n-1;i>=0;i--){
                printf("%d ",b[i]);
            }
            printf("\n");
        }
    }
}