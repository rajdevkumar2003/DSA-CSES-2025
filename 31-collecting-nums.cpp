#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	long long arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	
	long long target=0;
    unordered_map<long long,bool>mpp;
	
	for(int i=0;i<n;i++){
	    //if(arr[i]==1)continue;
        if(mpp.find(arr[i]-1)==mpp.end()){
            target++;
        }
        mpp[arr[i]]=true;
	}
	
	cout<<target<<endl;
	
	return 0;

}