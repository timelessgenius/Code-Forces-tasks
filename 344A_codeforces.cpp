#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    string antecessor, sucessor;
    cin >> antecessor;

    int count = 1;

    for(int i = 1; i < n; i++){
        cin >> sucessor;
        if(antecessor != sucessor){
            count++;
        }
        antecessor = sucessor;
    }

    cout << count << endl;
    return 0;
}
