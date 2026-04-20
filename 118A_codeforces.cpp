#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str; cin >> str; 
    
    for(int i = 0; i < str.length(); i++){
        str[i]=tolower(str[i]);
    }


    for(int i = 0; i < str.length(); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||str[i] == 'u' || str[i] == 'y'){
            str.erase(i,1);
            i--;
        }
    }


    for(int i = 1; i <= str.length(); i++){
        if(i % 2 != 0){
            str.insert(i-1,".");
        }
    }
    cout << str << endl;

    return 0;
}
