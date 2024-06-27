#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

void solve(){
    int n, count = 0, count2 = 0; cin >> n;
    string s; cin >> s;
    for(int i = 0; i < n; i++){
        if(s[i] == 'A')
            count++;
        else if(s[i] == 'D')
            count2++;
    }
    if(count > count2)
        cout << "Anton" << endl;
    else if(count < count2)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
