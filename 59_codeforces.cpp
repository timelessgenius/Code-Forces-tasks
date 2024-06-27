#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

void solve(){
    string s; cin >> s;
    int count = 0, count2 = 0; // count = maiusculas, count2 = minusculas

    for(int i = 0; i < (int)s.size();i++){
        if(s[i] >= 'A' && s[i] <= 'Z')
            count++;
        else
            count2++;
    }
    //cout << count << " " << count2 << endl;
    if(count > count2){
        for(int i = 0; i < (int)s.size();i++)
            s[i]=toupper(s[i]);
    }
    else if(count < count2){
        for(int i = 0; i < (int)s.size();i++)
            s[i]=tolower(s[i]);
    }
    else{
        for(int i = 0; i < (int)s.size();i++){
            if(toupper(s[i]))
                s[i]=tolower(s[i]);    
        }
    }

    cout << s << endl;
}
        



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
