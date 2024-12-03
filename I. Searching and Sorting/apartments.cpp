#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  cin.tie(0); ios::sync_with_stdio(0);
  ll n, m, k; 
  cin >> n >> m >> k;
  ll a[n], b[m];
  for(ll i = 0; i<n; ++i){cin >> a[i];}
  for(ll i = 0; i<m; ++i){cin >> b[i];}
  sort(a, a+n); sort(b, b+m);
  ll ni = 0, mi=0, num=0;
  do{
    if(abs(b[mi]-a[ni]) <= k){num++;ni++;mi++;}
    else if(b[mi]>a[ni]){ni++;}
    else {mi++;}
  }while((ni < n)&(mi < m));
  
  cout << num << "\n";
  
}