#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin>>n;
	
	for(long long i=1;i<=n;i++){
	    long long total = ((i*i)*(i*i)-(i*i))/2;
	    long long invalid = 4*(i-1)*(i-2);
	    cout<<total-invalid<<endl;
	}
	
	return 0;
}
