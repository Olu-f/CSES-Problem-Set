#include<bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(0);
    int n,a,ans=1;
    cin>>n;
    int pos[n+1];
    for(int i=1;i<=n;i++)cin>>a,pos[a]=i;
    for(int i=1;i<n;i++)if(pos[i+1]<pos[i])ans++;
    cout<<ans<<endl;
}