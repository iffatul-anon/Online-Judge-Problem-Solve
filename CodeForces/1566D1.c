#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,c=0;
        scanf("%d %d",&n,&m);
        int a[m];
        for(int i=0;i<m;i++) scanf("%d",&a[i]);
        for(int i=0;i<m;i++) for(int j=0;j<i;j++) if(a[i]>a[j]) c++;
        printf("%d\n",c);
    }
}