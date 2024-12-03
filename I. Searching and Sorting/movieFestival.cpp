#include <bits/stdc++.h>
using namespace std;
#define ll long long;

int main(){
    cin.tie(0); ios::sync_with_stdio(0);

    vector<array<int,2>> v;
    int n; cin >> n;
    for(int i = 0; i < n; ++i){
        int a, b;
        cin >> a >> b;
        v.push_back({b,a});
    }
    sort(v.begin(),v.end());
    int count = 1, end =v[0][0];
    for(int i = 1; i < n; ++i){
				if(end <= v[i][1]){end = v[i][0]; count++;}
    }

    cout << count << "\n";

}
