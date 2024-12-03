#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long

int main() {
  cin.tie(0); ios::sync_with_stdio(0);
  ll n, numD=1;
  cin >> n;
  ll x[n];
  for(ll i = 0; i<n; ++i){
    cin >> x[i];
  }
  sort(x, x+n);
  for(ll i = 1; i<n; ++i){
    if(x[i-1] != x[i]){++numD;}
  }
  cout << numD << "\n";
}
