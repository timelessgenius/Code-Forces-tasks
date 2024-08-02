#include <bits/stdc++.h>

using namespace std;


int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        int sum = 0;
        for(int i = 0; i < n; i++) cin >> v[i];
        for(int i = 0; i < n; i++) sum+=v[i];

        (sum%2==0) ? cout << "YES" << endl : cout << "NO" << endl; 

    }
    return 0;
}
