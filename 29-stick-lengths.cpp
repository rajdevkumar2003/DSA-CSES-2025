#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	vector<long long>nums(n);
	
	for(int i=0;i<n;i++){
	    cin>>nums[i];
	}
	sort(nums.begin(),nums.end());
	
	long long net=nums[n/2];
	
	long long ans=0;
	
	for(auto it:nums){
	    ans+=abs(it-net);
	}
	
	cout<<ans<<endl;
	return 0;

}

