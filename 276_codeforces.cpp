#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

void solve(){
   int n; cin >> n;
   string s; cin >> s;
   int count = 0;

   for(int i = 1; i < n; i++){
        if(s[i-1] == s[i]){
            count++;
        }
    }
    cout << count << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
