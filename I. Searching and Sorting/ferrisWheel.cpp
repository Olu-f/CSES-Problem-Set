#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  //input
  cin.tie(0); ios::sync_with_stdio(0);
  int n; cin >> n;
	ll x; cin >> x;
	ll p[n];
	for(int i = 0; i<n; ++i){
		cin >> p[i];
	}
	sort(p,p+n);

	//process
	int ans = 0;
	int i = 0; int j = n-1;
	while(i<=j){
    ans++;
		if(i==j){break;}
		if(p[i]+p[j]<=x){
      i++; j--;
      }else{j--;}
	}

	//output
	cout << ans << "\n";
}