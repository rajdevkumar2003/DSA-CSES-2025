#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	vector<long long>nums(n);
	
	for(int i=0;i<n;i++){
	    cin>>nums[i];
	}
	
	long long currSum=0;
	long long maxSum=LLONG_MIN;
	
	for(auto it:nums){
	    if(currSum<0)currSum=0;
	    currSum+=it;
	    maxSum=max(maxSum,currSum);
	}
	
	cout<<maxSum<<endl;
	return 0;

}
