#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

void solve(){
    int n; cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++) cin >> v[i];

    int best_result = v[0];
    int bad_result = v[0];
    int count = 0;

    for(int i = 1; i < n; i++){
        if(v[i] > best_result){
            best_result = v[i];
            count++;
        }
        if(v[i] < bad_result){
            bad_result = v[i];
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
