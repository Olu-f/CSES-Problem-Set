#include <bits/stdc++.h>
using namespace std;

void move(int n, int start, int end){
    int mid = 6-start-end;
    if(n==1){
        cout << start << " " << end << "\n";
    }else if (n==2){
        cout << start << " " << mid << "\n";
        cout << start << " " << end << "\n";
        cout << mid << " " << end << "\n"; 
    }else{
        move(n-1, start, mid);
        move(1,start,end);
        move(n-1, mid, end);
    }
}

int main(){
    cin.tie(nullptr); ios_base::sync_with_stdio(0);
    int n; cin >> n;
    cout << (1<<n) -1 << "\n";
    move(n, 1, 3);
}