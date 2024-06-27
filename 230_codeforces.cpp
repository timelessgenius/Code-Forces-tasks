#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll k,n; cin >> k >> n; // poder do kirito e numero de dragoes.
    
    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++){
        int a,b; cin >> a >> b;
        v[i].first = a;
        v[i].second = b;
    }

    sort(v.begin(),v.end());

    for(int i = 0; i < n;i++){
        if(k > v[i].first){
            k += v[i].second;
        }
        else{ 
            cout << "NO" << endl;
            return 0;
        }    
    }
   
    cout << "YES" << endl;

    return 0;
}
