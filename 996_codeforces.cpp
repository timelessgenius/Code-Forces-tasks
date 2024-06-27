#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

void solve(){
    int n; cin >> n;    
    int ans = 0;
    int a[] = {100,20,10,5,1};

    for(int i = 0; i < 5; i++){
        ans+=n/a[i];
        n = n%a[i];
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
