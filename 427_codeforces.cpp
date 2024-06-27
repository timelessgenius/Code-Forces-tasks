#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    int policiais = 0, crimes = 0;

    for(int i = 0; i < n; i++){
         cin >> v[i];
        if(v[i] == -1){
            if(policiais > 0) policiais--;
            else crimes++;
        }
        else policiais += v[i];
    }
    cout << crimes << endl;

}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
