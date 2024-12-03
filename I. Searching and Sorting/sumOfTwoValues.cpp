#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  int n; ll x;
	cin >> n >> x;
	map<int, int> a;

	for(int i = 0; i<n; ++i){
		ll ai; cin >> ai;
		if(a.find(x-ai) != a.end()){
			cout << a[x-ai]+1 << " " << i+1 << "\n";
			return 0;
		}	
		a[ai] = i;
	}

	cout << "IMPOSSIBLE";
}