#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x,a[10]={0};
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&x);
            a[x%10]++;
        }
        if((a[0]>1 && a[3]>0) || (a[0]>0 && ((a[1]>0 && a[2]>0) || (a[4]>0 && a[9]>0) || (a[5]>0 && a[8]>0) || (a[6]>0 && a[7]>0)))) printf("YES\n");
        else if(a[1]>2 || (a[1]>0 && ((a[3]>0 && a[9]>0) || (a[4]>0 && a[8]>0) || (a[5]>0 && a[7]>0) || a[6]>1))) printf("YES\n");
        else if((a[2]>1 && a[9]>0) || (a[2]>0 && ((a[3]>0 && a[8]>0) || (a[4]>0 && a[7]>0) || (a[5]>0 && a[6]>0)))) printf("YES\n");
        else if((a[3]>1 && a[7]>0) || (a[3]>0 && ((a[4]>0 && a[6]>0) || a[5]>1))) printf("YES\n");
        else if(a[4]>1 && a[5]>0) printf("YES\n");
        else if(a[5]>0 && a[9]>1) printf("YES\n");
        else if(a[6]>0 && a[8]>0 && a[9]>0) printf("YES\n");
        else if((a[7]>0 && a[8]>1) || (a[7]>1 && a[9]>0)) printf("YES\n");
        else printf("NO\n");
    }
}