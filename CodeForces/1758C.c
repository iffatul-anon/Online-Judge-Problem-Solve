#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x,x2,j;
        scanf("%d %d",&n,&x);
        x2=x;
        int a[n];
        if(n==x){
            printf("%d ",x);
            for(int i=2;i<n;i++) printf("%d ",i);
            printf("1\n");
        }
        else if(n%x==0){
            a[0]=x;
            for(int i=2;i<n;i++) {
                if(i==x) {
                    if(x*2<=n) a[i-1]=x*2;
                    else {
                        a[i-1]=n;
                        for(j=i;j>=x2;j=j/2){
                            if(n%j!=0){
                                a[j/2-1]=n;
                                a[j-1]=j;
                            }
                            else break;
                        }
                        for(int k=j+1;k<n;k++){
                            if(n%k==0 && k%j==0 && k!=x2){
                                a[k-1]=n;
                                a[j-1]=k;
                                j=k;
                            }
                        }
                    }
                    x=x*2;
                }
                else a[i-1]=i;
            }
            a[n-1]=1;
            for(int i=0;i<n;i++) printf("%d ",a[i]);
            printf("\n");
        }
        else printf("-1\n");
    }
}           