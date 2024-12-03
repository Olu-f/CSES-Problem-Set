#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	cin.tie(0); ios::sync_with_stdio(0);
	int n, m;
	cin >> n >> m;
	vector<ll> h(n); ll t;

	for(int i = 0; i<n; ++i){
		cin >> h[i];
	}
	sort(h.begin(), h.end());

	for(int i = 0; i<m; ++i){
		cin >> t;
		auto it = upper_bound(h.begin(), h.end(), t);
		if(it == h.begin()){
			cout << "-1\n";
		}else{
			it--;
			cout << *it << "\n";
			h.erase(it);
		}
		//for(ll i: h){cout << i << " ";}
		//cout << endl;
	}

}