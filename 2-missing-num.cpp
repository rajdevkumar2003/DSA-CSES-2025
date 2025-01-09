#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin>>N;
	long long n=N;
	long long sum=0;
	for(long long i=0;i<n-1;i++){
	    long long num;
	    cin>>num;
	    sum+=num;
	}
	
	long long totalSum=n*(n+1)/2;
	long long miss=totalSum-sum;
	cout<<miss;
	return 0;
	
}
