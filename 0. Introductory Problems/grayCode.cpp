#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0); ios_base::sync_with_stdio(0);
    int n; cin >> n;
    
    vector<int> hamming_space = {0,1};

    if (n > 1){
        for(int i = 1; i < n; i++){
            int s = hamming_space.size();
            for(int j = s-1; j >= 0; --j){
                hamming_space.push_back(hamming_space[j]|(1<<i));
            }
        }
    }

    for(int i: hamming_space){
        for(int k = n-1; k>=0; k--){
            if (i&(1<<k)) cout << "1";
            else cout << "0";
        }
        cout << "\n";
    }
}