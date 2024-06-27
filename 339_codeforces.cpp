#include <bits/stdc++.h>

using namespace std;

#define endl '\n'   
typedef long long ll;
typedef unsigned long long ull;

void solve(){
    string s,s_aux;
        cin >> s_aux;
        for(int i = 0; i < (int)s_aux.size(); i++){
            if(s_aux[i] != '+'){
                s+=s_aux[i];
            }
        }
        sort(s.begin(),s.end());
        cout << s[0];
        for(int i = 1; i < (int)s.size(); i++){
            cout << "+" << s[i];
        }
        cout << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
