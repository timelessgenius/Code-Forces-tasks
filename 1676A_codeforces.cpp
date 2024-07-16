#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

void solve(){
    int t; cin >> t;
    while(t--){
       string s; cin >> s;
       int sum1 = 0, sum2 = 0;

       for(int i =  0; i < 3; i++)  sum1+= (int)s[i] - '0';
       for(int i = 3; i < 6; i++) sum2+= (int)s[i] - '0';

       (sum1 == sum2) ? cout << "YES" << endl : cout << "NO" << endl;
        
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
   

    return 0;
}
