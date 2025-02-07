#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<pair<long long,long long>>op(n);
    for(int i=0;i<n;i++){
        cin>>op[i].first>>op[i].second;
    }
    sort(op.begin(),op.end());
    priority_queue<long long,vector<long long>,greater<long long>>pq;
    
    int cnt=0;
    int ans=0;
    
    for(int i=0;i<n;i++){
        long long arrival=op[i].first;
        long long dept=op[i].second;
        
        while(!pq.empty()&&arrival>pq.top()){
            pq.pop();
            cnt--;
        }
        
        pq.push(dept);
        cnt++;
        ans=max(cnt,ans);
    }
    
    cout<<ans<<endl;
    
}
int main() {
	// your code goes here
    solve();
    return 0;
}
