#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

void solve(){
    string s; cin >> s;
    
    sort(s.begin(),s.end());

    char aux = s[0];
    int cont = 1;
    
    for(int i = 1; i < (int)s.size(); i++){
        if(s[i] != aux){
            cont++;
            aux = s[i];
        }
    }

    if(cont%2 == 0)
        cout << "CHAT WITH HER!" << endl;
    
    else cout << "IGNORE HIM!" << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
