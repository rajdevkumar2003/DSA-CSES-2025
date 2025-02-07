#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	long long arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	
	long long target=1;
	sort(arr,arr+n);
	
	for(int i=0;i<n;i++){
	    if(arr[i]>target)break;
	    
	    target+=arr[i];
	}
	
	cout<<target<<endl;
	
	return 0;

}
