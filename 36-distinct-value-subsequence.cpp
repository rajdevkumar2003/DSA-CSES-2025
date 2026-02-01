#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin>>n;
	long long arr[n];
    long long ans=1;
	
	for(long long i=0;i<n;i++){
	    cin>>arr[i];
	}
	
	map<long long,long long>mpp;
    long long mod=1e9+7;

    for(long long i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    for(auto it:mpp){
        long long way=(it.second+1)%mod;
        ans=(ans*way)%mod;
    }

    cout<<ans-1;
    
	return 0;
}