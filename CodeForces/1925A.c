#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d %d",&n,&k);
        for(int i=0;i<n;i++){
            for(int j=0;j<k;j++){
                printf("%c",j+'a');
            }
        }
        printf("\n");
    }
}