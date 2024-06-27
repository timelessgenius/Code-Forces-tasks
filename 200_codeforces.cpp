#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

void solve(){
    int n; cin >> n;
    int sum = 0;

    for(int i = 0; i < n; i++){
        int temp; cin >> temp;
        sum += temp;
    }

    cout << setprecision(12) << fixed << (double)sum/n << endl;
    


}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
