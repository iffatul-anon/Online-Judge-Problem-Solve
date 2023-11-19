#include<stdio.h>
int main(){
    int n,m,count,flag;
    scanf("%d %d",&n,&m);
    while(n!=0 || m!=0){   
    int a[m];
    flag=0;
    for(int i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<m;i++){
        count=0;
        for(int j=i+1;j<m;j++){
            if(a[i]==a[j]){
                count++;
                for(int k=j;k<m-1;k++){
                    a[k]=a[k+1];
                }
                j--;
                m--;
            }
        }
        if(count!=0){
            flag=flag+1;
        }
    }
    printf("%d\n",flag);
    scanf("%d %d",&n,&m);
}
    return 0;
}