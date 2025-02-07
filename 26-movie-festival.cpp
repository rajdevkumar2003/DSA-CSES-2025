#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<pair<long long,long long>>op(n);
    for(int i=0;i<n;i++){
        cin>>op[i].second>>op[i].first;
    }
    sort(op.begin(),op.end());
    
    int cnt=1;
    int prevDept=op[0].first;
    for(int i=1;i<n;i++){
        int arr=op[i].second;
        if(arr>=prevDept){
            cnt++;
            prevDept=op[i].first;
        }
    }
    
    
    cout<<cnt<<endl;
    
}
int main() {
	// your code goes here
    solve();
    return 0;
}
