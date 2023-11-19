#include<stdio.h>
#include<string.h>
int main(){
    char a[25],b[25];
    scanf("%s %s",&a,&b);
    int flag=0;
    for(int i=0;i<strlen(a) && i<strlen(b);i++){
        if(a[i]==b[i]){
            continue;
        }
        if(a[i]<b[i]){
            flag=1;
            break;
        }
        else{
            flag=2;
            break;
        }
    }
    if(flag==1){
        printf("%s\n%s\n",a,b);
    }
    else if(flag==2){
        printf("%s\n%s\n",b,a);
    }
    else{
        if(strlen(a)>strlen(b)){
            printf("%s\n%s\n",b,a);
        }
        else{
            printf("%s\n%s\n",a,b);
        }
    }
    return 0;
}