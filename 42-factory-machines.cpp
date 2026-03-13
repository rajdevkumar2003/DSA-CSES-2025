#include <bits/stdc++.h>
using namespace std;


bool possible(long long totalTime, vector<long long>&nums, long long n, long long t){
    long long prod=0;
    for(long long i=0;i<n;i++){
        prod+=(long long)(totalTime/nums[i]);
        if(prod>=t)return true;
    }

    return false;
}
int main() {
	long long n,t;
    cin>>n>>t;
    vector<long long>nums(n);
    long long maxi=0;

    for(long long i=0;i<n;i++){
        cin>>nums[i];
        maxi=max(maxi,nums[i]);
    }

    long long ans=-1;
    long long low=1;
    long long high=maxi*t;

    while(low<=high){
        long long mid=(low+high)/2;

        if(possible(mid,nums,n,t)){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }

    cout<<ans;
    
	return 0;
}