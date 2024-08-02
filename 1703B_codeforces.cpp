#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;

int main(){ 
    int t; cin >> t;
    
    while(t--){
        
        int n; cin >> n;
        
        string s; cin >> s;
        
        sort(s.begin(), s.end());

        int count = 2;
        auto test = s[0];

        for(int i = 1; i < (int) s.size(); i++){
            if(s[i] == test)
                count++;
            else{
                count+=2;
                test = s[i];
            }
        }
        
        cout << count << endl;
    }

    return 0; 
}