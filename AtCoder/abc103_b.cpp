#include<iostream>
#include<string.h>
using namespace std;
int main(){
        int l,f=0;
        string s,t;
        cin>>s>>t;
        l=s.length();
        for(int i=0;i<l;i++){
            string x;
            for(int j=i;j<l;j++) x+=t[j];
            for(int j=0;j<i;j++) x+=t[j];
            if(s==x){
                f=1;
                break;
            }
        }
        if(f) printf("Yes\n");
        else printf("No\n");
}