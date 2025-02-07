#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	long long x;
    cin>>n>>x;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<pair<long long,int>>op;
    for(int i=0;i<n;i++){
        op.push_back({arr[i],i});
    }
    vector<int>ans;
    sort(op.begin(),op.end());
    int left=0;
    int right=n-1;
    long long sum=0;
    while(left<right){
        sum=op[left].first+op[right].first;
        if(sum==x){
            ans.push_back(op[left].second+1);
            ans.push_back(op[right].second+1);
            break;
        }
        else if(sum>x)right--;
        else left++;
    }
    sort(ans.begin(),ans.end());
    if(ans.size()==0)cout<<"IMPOSSIBLE"<<endl;
    else {
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    
    return 0;

}
