#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
	cin.tie(0); ios::sync_with_stdio(0);
    int n; cin >> n;
	ll P[n];
	for(int i = 0; i<n; ++i){
		cin >> P[i];
	}
    sort(P,P+n);
	ll avg = P[n/2];
	ll cost = 0;
	for(ll p: P){
		cost += abs(p - avg);
	}
 
	cout << cost << "\n";
}