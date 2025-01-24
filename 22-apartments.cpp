#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n,m,k;
	cin>>n>>m>>k;
	vector<long long>applicants(n);
	vector<long long>apartments(m);
	
	for(long long i=0;i<n;i++){
	    cin>>applicants[i];
	}
	for(long long i=0;i<m;i++){
	    cin>>apartments[i];
	}
	
	sort(applicants.begin(),applicants.end());
	sort(apartments.begin(),apartments.end());
	long long cnt=0;
	long long i=0,j=0;
	
	while(i<n&&j<m){
	    if(abs(applicants[i]-apartments[j])<=k){
	        cnt++;
	        i++;
	        j++;
	    }
	    else if(applicants[i]>apartments[j])j++;
	    else i++;
	}
	
	cout<<cnt<<endl;
	
	return 0;

}
