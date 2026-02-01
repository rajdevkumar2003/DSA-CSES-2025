#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin>>n;
	long long arr[n];
	
	for(long long i=0;i<n;i++){
	    cin>>arr[i];
	}
	
	multiset<long long>ms;

    for(long long i=0;i<n;i++){
        if(ms.upper_bound(arr[i])==ms.end()){
            ms.insert(arr[i]);
        }
        else {
            ms.erase(ms.upper_bound(arr[i]));
            ms.insert(arr[i]);
        }
    }

	cout<<ms.size();
	return 0;
}