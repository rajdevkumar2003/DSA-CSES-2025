#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int>arr(n);
	
	for(int i=1;i<=n;i++){
	    arr[i-1]=i;
	}

	while(arr.size()>1){
        vector<int>prev;
        int m=arr.size();
        if(m%2==1)prev.push_back(arr[m-1]);
        for(int i=1;i<m;i+=2){
          cout<<arr[i]<<" ";
          prev.push_back(arr[i-1]);
        }
        arr=prev;
    }

    cout<<arr[0];
    
	return 0;
}