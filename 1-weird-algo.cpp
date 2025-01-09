#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin>>N;
	long long n=N;
	vector<long long>ans;
	while(n!=1){
	    ans.push_back(n);
	    if(n%2){
	        n*=3;
	        n+=1;
	    }
	    else n/=2;
	}
	ans.push_back(1);
	
	for(auto it:ans){
	    cout<<it<<" ";
	}
	
	return 0;
	
}
