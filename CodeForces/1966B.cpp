#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,f=0;
        scanf("%d %d",&n,&m);
        string s[n];
        for(int i=0;i<n;i++) cin>>s[i];
        if(s[0][0]==s[n-1][m-1] || s[0][m-1]==s[n-1][0]) f=1;
        for(int i=0;i<n;i++) {
            if(s[i][0]=='W'){
                for(int j=0;j<n;j++){
                    if(s[j][m-1]=='W'){
                        for(int k=0;k<m;k++){
                            if(s[0][k]=='W'){
                                for(int l=0;l<m;l++){
                                    if(s[n-1][l]=='W') {
                                        f=1;
                                        break;
                                    }
                                }
                                break;
                            }
                        }
                        break;
                    }
                }
                break;
            }
        }
        for(int i=0;i<n;i++) {
            if(s[i][0]=='B'){
                for(int j=0;j<n;j++){
                    if(s[j][m-1]=='B'){
                        for(int k=0;k<m;k++){
                            if(s[0][k]=='B'){
                                for(int l=0;l<m;l++){
                                    if(s[n-1][l]=='B') {
                                        f=1;
                                        break;
                                    }
                                }
                                break;
                            }
                        }
                        break;
                    }
                }
                break;
            }
        }
        if(f) printf("YES\n");
        else printf("NO\n");
    }
}