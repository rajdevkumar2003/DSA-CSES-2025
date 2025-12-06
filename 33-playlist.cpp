#include <bits/stdc++.h>
using namespace std;

bool check(int k, long long arr[], int n){
    
	unordered_map<long long,int>mpp;
	
	int l=0,r=0;
	
	while(r<n){
	    while(r-l+1<k){
	        mpp[arr[r]]++;
	        r++;
	    }
	    
	    mpp[arr[r]]++;
	    if(mpp.size()==k)return true;
	    mpp[arr[l]]--;
	    if(mpp[arr[l]]==0)mpp.erase(mpp[arr[l]]);
	    
	    r++;
	    l++;
	}
	
	return false;
}

int main() {
	int n;
	cin>>n;
	long long arr[n];
	
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	
	int ans=-1;
	int low=1,high=n;
	while(low<high){
	    int mid=(low+high)/2;
	    
	    if(check(mid,arr,n)){
	        ans=mid;
	        low=mid+1;
	    }
	    else high=mid-1;
	}
	
	cout<<ans<<endl;
	
	return 0;
	

}