#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    int n, k; cin >> n >> k;
    int aux = 240-k, res = 0;
    int count = 0;
    for(int i = 1; i <= n; i++){
        res+= (5*i);
        if(res > aux) break;
        count++;
    }

    cout << count << endl;

    return 0;
}

