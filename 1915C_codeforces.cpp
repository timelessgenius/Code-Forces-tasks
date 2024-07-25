#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
       unsigned long long n, sum = 0; cin >> n;
        double temp;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];

       for(int i = 0; i < n; i++) sum+=v[i];
        temp = sqrt(sum);
        if(temp - (int) temp > 0)
            cout << "NO" << endl;
        else 
            cout << "YES" << endl;
    }

    return 0;
}