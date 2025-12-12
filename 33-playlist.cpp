#include <bits/stdc++.h>
using namespace std;


int main() {
	long long n;
	cin>>n;
	long long arr[n];
	
	for(long long i=0;i<n;i++){
	    cin>>arr[i];
	}
	
	long long ans=0;
	unordered_map<long long,long long>mpp;
	
	long long l=0,r=0;
	
	while(r<n){
	    mpp[arr[r]]++;

		if(l<n&&mpp.size()<r-l+1){
			mpp[arr[l]]--;
			if(mpp[arr[l]]==0)mpp.erase(arr[l]);
			l++;
		}
		if(mpp.size()==r-l+1)ans=max(ans,r-l+1);
		r++;
	}
	
	cout<<ans;
	
	return 0;
}