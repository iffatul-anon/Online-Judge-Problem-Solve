#include<stdio.h>
#include<string.h>
int main(){
    char s1[100],s2[100];
    while(gets(s1) && gets(s2)){
        int max=0,count=0;
        for(int i=0;i<strlen(s1);i++){
            for(int j=0;j<strlen(s2);j++){
                if(s1[i]==s2[j]){
                    int a=i,b=j;
                    while(a<strlen(s1) && b<strlen(s2)){
                        if(s1[a++]==s2[b++]){
                            count++;
                        }
                        else{
                            break;
                        }
                    }
                    if(max<count){
                        max=count;
                    }
                    count=0;
                }
            }
        }
        printf("%d\n",max);
    }
    return 0;
}