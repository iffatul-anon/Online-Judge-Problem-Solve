#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        char s1[20],s2[20];
        scanf("%s %s",&s1,&s2);
        int flag=0;
        if(strcmp(s1,s2)!=0){
            if(strcmp(s1,"tesoura")==0 && strcmp(s2,"papel")==0){
                flag=1;
            }
            else if(strcmp(s1,"tesoura")==0 && strcmp(s2,"lagarto")==0){
                flag=1;
            }
            else if(strcmp(s1,"papel")==0 && strcmp(s2,"pedra")==0){
                flag=1;
            }
            else if(strcmp(s1,"papel")==0 && strcmp(s2,"Spock")==0){
                flag=1;
            }
            else if(strcmp(s1,"pedra")==0 && strcmp(s2,"tesoura")==0){
                flag=1;
            }
            else if(strcmp(s1,"pedra")==0 && strcmp(s2,"lagarto")==0){
                flag=1;
            }
            else if(strcmp(s1,"lagarto")==0 && strcmp(s2,"Spock")==0){
                flag=1;
            }
            else if(strcmp(s1,"lagarto")==0 && strcmp(s2,"papel")==0){
                flag=1;
            }
            else if(strcmp(s1,"Spock")==0 && strcmp(s2,"tesoura")==0){
                flag=1;
            }
            else if(strcmp(s1,"Spock")==0 && strcmp(s2,"pedra")==0){
                flag=1;
            }
            else{
                flag=2;
            }
        }
        if(flag==1){
            printf("Caso #%d: Bazinga!\n",i);
        }
        else if(flag==2){
            printf("Caso #%d: Raj trapaceou!\n",i);
        }
        else{
            printf("Caso #%d: De novo!\n",i);
        }
    }
    return 0;
}