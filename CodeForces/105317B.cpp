#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    char s1[10],s2[300010];
    scanf("%s %s",s1,s2);
    int l1=strlen(s1),l2=strlen(s2),c=0,x=0,a[10];
    char s3[l2+1];
    map<char,int>mp;
    for(int i=0;i<l2;i++) mp[s2[i]]++;
    for(int i=l1-1;i>=0;i--){
        a[x]=mp[s1[i]];
        for(int j=0;j<a[x];j++){
            s3[c++]=s1[i];
        }
        x++;
    }
    s3[c]=0;
    int sum=a[x-1],ans=0;
    for(int i=x-2;i>=0;i--) {
        ans+=sum*a[i];
        sum+=a[i];
    }

    printf("%lld\n",ans);
    printf("%s\n%s",s3,s1);
}
