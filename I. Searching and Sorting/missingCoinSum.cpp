#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
	cin.tie(0); ios::sync_with_stdio(0);
	int n; cin >> n;
	int a[200001];
	
	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}
	sort(a, a+n);
	ll ans = 0;
	for(int i = 0; i < n; ++i){
		if(ans+1 < a[i]) break;
		ans += a[i];
	}
	cout << ans+1 << "\n";
}  