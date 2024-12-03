#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    cin.tie(0); ios::sync_with_stdio(0);
    int n; cin >> n;
    ll max = (ll)-10e+9; ll sum = max;
    for(int i = 0; i < n; ++i){
        ll x; cin >> x;
        if(x > sum+x){sum = x;}
        else{sum += x;}
        if (sum>max){max = sum;}
    }
    cout<< max << "\n";
}