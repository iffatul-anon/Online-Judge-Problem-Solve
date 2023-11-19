#include <stdio.h>
#include<string.h>
int main(){
    char s1[1000000],s2[1000000],s3[1000000];
    scanf("%s %s",s1,s2);
    int l1=strlen(s1),l2=strlen(s2),c=0;
    if(l1>l2){
        strcpy(s3,s2);
        for(int i=l2;i>0;i--){
            if(s1[i-1]!=s2[i-1]){
                c=0;
                break;
            }
            if(l1%i==0 && l2%i==0){
                s3[i]=0;
                int count=0;
                for (int j = 0 ; j < l1 - i + 1 ;  j++ ) {  
                    if ( strstr ( s1 + j , s3 ) == s1 + j ) {  
                        count ++ ;  
                        j = j + i - 1 ;  
                    }  
                    else break;
                }  
                if(l1/i==count) c++;   
            }
        }
    }
    else{
        strcpy(s3,s1);
        for(int i=l1;i>0;i--){
            if(s1[i-1]!=s2[i-1]){
                c=0;
                break;
            }
            if(l1%i==0 && l2%i==0){
                s3[i]=0;
                int count=0;
                for (int j = 0 ; j < l2 - i + 1 ; j++ ) {  
                    if ( strstr ( s2 + j , s3 ) == s2 + j ) {  
                        count ++ ;  
                        j = j + i - 1 ;  
                    }  
                    else break;
                }  
                if(l2/i==count) c++;   
            }
        }
    }
    printf("%d\n",c);
}