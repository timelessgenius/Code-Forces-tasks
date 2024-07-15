#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

void solve(){
    int t; cin >> t;

    while(t--){
        int a,b,c; cin >> a >> b >> c;

        if(c > a && c > b)
            cout << "+" << endl;
        
        else   
            cout << "-" << endl; 
    }


}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}