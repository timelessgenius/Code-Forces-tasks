#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

void solve(){
    string s, s1; cin >> s >> s1;
    for(int i = 0; i < (int)s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i]=tolower(s[i]);
    }
    for(int i = 0; i < (int)s1.size(); i++){
        if(s1[i] >= 'A' && s1[i] <= 'Z')
            s1[i]=tolower(s1[i]);
    }
    
    if(s > s1)
        cout << "1" << endl;
    
    else if(s < s1)
        cout << "-1" << endl;
    
    else cout << "0" << endl;


}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
