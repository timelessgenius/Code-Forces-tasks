#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;


void solve(){
    int n; cin >> n;
    int sum = 0;
    int ans = 0;
    
    
    for(int i = 0; i < n; i++){
        int a,b; cin >> a >> b;
        sum-=a;
        sum+=b;
        ans = max(ans,sum);
    }
    
   cout << ans << endl;

}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
