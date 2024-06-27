#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int qtd; cin >> qtd;
        char s[qtd];
        int maior = 0; 
        for(int j = 0; j < qtd; j++){
            cin >> s[j];
            int v[qtd]; 
            v[j] =  (s[j] - 'a') + 1; 
            if(v[j] > maior)
                maior = v[j];
        }
        cout << maior << endl;
    }

    return 0;
}