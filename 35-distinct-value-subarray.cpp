#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin>>n;
	long long arr[n];
    long long ans=0;
	
	for(long long i=0;i<n;i++){
	    cin>>arr[i];
	}
	
	map<long long,long long>mpp;

    int r=0,l=0;

    while(r<n){
        mpp[arr[r]]++;

        while(r-l+1>mpp.size()){
            mpp[arr[l]]--;
            if(mpp[arr[l]]==0)mpp.erase(arr[l]);
            l++;
        }

        if(mpp.size()==r-l+1)ans+=(r-l+1);
        r++;
    }

    cout<<ans;
    
	return 0;
}