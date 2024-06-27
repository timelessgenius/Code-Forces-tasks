#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

void solve(){
    int n, h; cin >> n >> h; // leio o numero de pessoas e a altura da cerca
    
    vector<int> v(n);

    for(int i = 0; i < n; i++) cin >> v[i];
    
    int count = 0;
    
    for(int i = 0; i < n; i++) (v[i] > h) ? count+=2 : count++; // se a altura da iésima pessoa for maior que a da cerca acrescento 2 
    
    cout << count << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}

/*
    se v[i] > h => cont+=2;
    se v[i] <= h => cont++;

*/