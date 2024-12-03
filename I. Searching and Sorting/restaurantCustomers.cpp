#include <bits/stdc++.h>
using namespace std;
#define ll long long;

int main(){
    cin.tie(0); ios::sync_with_stdio(0);
    vector<pair<int,bool>> times;
    int n; cin >> n;
    for(int i = 0; i < n; ++i){
        int start, stop;
        cin >> start >> stop;
        times.push_back({start,1});
        times.push_back({stop,0});
    }
    sort(times.begin(),times.end());
    int count = 0; int max = 0;
    for(pair<int,bool> item: times){
        if(item.second) count++;
        else count--;
        if(count > max) max = count;
    }

    cout << max << "\n";

}