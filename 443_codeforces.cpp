#include <bits/stdc++.h>

using namespace std;

#define endl '\n'	
typedef long long ll;
typedef unsigned long long ull;

void solve(){
    string s; getline(cin >> ws,s);
    set<char> ans;
    string aux = "";
    for(int i = 0; i < (int)s.size();i++){
        if(s[i] >= 'a' && s[i] <= 'z')
            aux+=s[i];   
    }
    for(int i = 0; i < (int)aux.size(); i++)
        ans.insert(aux[i]);
    cout << ans.size() << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
