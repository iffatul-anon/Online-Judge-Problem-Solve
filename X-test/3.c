#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char s[n+1][16];
    int p[n],p2[n];
    for(int i=0;i<n;i++){
        scanf("%s %d",&s[i],&p[i]);
        p2[i]=p[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(p[i]>p[j]){
                int tem=p[i];
                p[i]=p[j];
                p[j]=tem;
            }
        }
    }
    printf("Selise Coding Challenge 2023 Winners\n");
    for(int i=0;i<n;i++){
        if(p[0]==p2[i]){
            printf("Winner: %s => %d\n",s[i],p2[i]);
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(p[1]==p2[i]){
            printf("1st Runner Up: %s => %d\n",s[i],p2[i]);
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(p[2]==p2[i]){
            printf("2nd Runner Up: %s => %d\n",s[i],p2[i]);
            break;
        }
    }
    return 0;
}