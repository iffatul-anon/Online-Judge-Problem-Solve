#include<stdio.h>
#include<string.h>
int main(){
    int anon=0;
    char s1[1000],s2[1000000];
    while(EOF!=scanf("%s %s",&s1,&s2)){
        anon++;
        int count=0,pos;
        for(int i=0;i<strlen(s2);i++){
            if(s1[0]==s2[i]){
                int x=0;
                for(int j=i;j<strlen(s2);j++){
                    if(s1[x]!=s2[j]){
                        break;
                    }
                    x++;
                    if(x==strlen(s1)){
                        break;
                    }
                }
                if(x==strlen(s1)){
                    count++;
                    pos=i+1;
                }
            }
        }
        if(count==0){
            printf("Caso #%d:\n",anon);
            printf("Nao existe subsequencia\n");
        }
        else{
            printf("Caso #%d:\n",anon);
            printf("Qtd.Subsequencias: %d\n",count);
            printf("Pos: %d\n",pos);
        }
        printf("\n");
    }
    return 0;
}