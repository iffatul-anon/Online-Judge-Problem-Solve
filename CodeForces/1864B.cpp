#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k,flag;
        scanf("%d %d",&n,&k);
        char s[n+1];
        scanf("%s",s);
        if(k%2==0){
            sort(s,s+n);
            printf("%s\n",s);
        }
        else{
            int y=0,z=0;
            char s2[n],s3[n];
            for(int j=0;j<n;j++){
                if(j%2==0) s2[y++]=s[j];
                else s3[z++]=s[j];
            }
            sort(s2,s2+y);
            sort(s3,s3+z);
            y=0,z=0;
            for(int i=0;i<n;i++){
                if(i%2==0) printf("%c",s2[y++]);
                else printf("%c",s3[z++]);
            }
            printf("\n");
        }
    }
}