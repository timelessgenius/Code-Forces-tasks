#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    char str[n];
    for(int i = 0; i < n; i++){
        cin >> str[i];
        if(str[i] == 'c' || str[i] == 'o' || str[i] == 'd' || str[i] == 'e' || str[i] == 'f' || str[i] == 'o' || str[i] == 'r' || str[i] == 'c' || str[i] == 'e' || str[i] == 's')
            cout << "YES" << endl;
        else    
            cout << "NO" << endl;
    }

    return 0;
}