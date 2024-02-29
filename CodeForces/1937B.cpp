#include<iostream>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,c=0;
        scanf("%d",&n);
        string s,s1,s2,s11;
        cin>>s1>>s2;
        for(int i=0;i<n;i++){
            s+=s1[i];
            if((s1[i+1]=='0' || s2[i]=='1') && i<n-1) continue;
            else{
                for(i=i;i<n;i++) s+=s2[i];
                break;
            }
        }
        for(int i=0;i<n;i++){
            s11+=s1[i];
            if(s11+s2==s) c++;
            s2.erase(s2.begin());
        }
        cout<<s<<'\n'<<c<<'\n';
    }
}