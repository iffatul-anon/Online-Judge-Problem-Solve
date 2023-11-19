#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int l, c, r1, r2;

    while(cin >> l >> c >> r1 >> r2 && (l || c))
    {
        if(min(l,c) < max(r1,r2) * 2) cout << "N"<<endl;
        else{
            r1 += r2;
            l -= r1; 
            c -= r1;
            
            if(r1 * r1 > ((l * l) + (c * c))) cout << "N"<<endl;
            else cout << "S"<<endl;
        }
    }
    return 0;
}