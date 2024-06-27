#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
        int tam; cin >> tam;
        char s[tam];
        for(int i = 0; i < tam; i++)
            cin >> s[i];
        int f,l;
        for(int i = 0; i < tam;i++){
            if(s[i] == 'B'){
                f = i;
                break;
            }
        }
        for(int i = tam-1; i >= 0; i--){
            if(s[i] == 'B'){
                l = i;
                break;
            }
        }
        cout << l - f + 1 << endl;

    }
    

    return 0;
}