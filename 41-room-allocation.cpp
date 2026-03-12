#include <bits/stdc++.h>
using namespace std;


int main() {
	long long n;
	cin>>n;
	vector<vector<long long>>op(n,vector<long long>(3,-1));

	
	for(long long i=0;i<n;i++){
	    cin>>op[i][0]>>op[i][1];
        op[i][2]=i;
	}
	
    sort(op.begin(),op.end());
    
    priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,greater<pair<long long,long long>>>pq;
    vector<long long>ans(n,-1);
    int cnt=1;
    for(long long i=0;i<n;i++){
        if(pq.empty()||pq.top().first>=op[i][0]){
            ans[op[i][2]]=cnt;
            pq.push({op[i][1],op[i][2]});
            cnt++;
        }
        else {
            ans[op[i][2]]=ans[pq.top().second];
            pq.pop();
            pq.push({op[i][1],op[i][2]});
        }
    }

    cout<<cnt-1<<endl;
    for(auto it:ans)cout<<it<<" ";
    
	return 0;
}