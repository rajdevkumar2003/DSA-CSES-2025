#include <bits/stdc++.h>
using namespace std;

int isNested(int start, int end, vector<vector<long long>>&op, int n){
    long long low=0,high=n-1;

    while(low<=high){
        long long mid=(low+high)/2;

        if(op[mid][0]>=start&&op[mid][1]<=end)return 1;
        else if(op[mid][0]>=start){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }

    return 0;
}

int isContains(int start, int end, vector<vector<long long>>&op, int n){
    long long low=0,high=n-1;

    while(low<=high){
        long long mid=(low+high)/2;

        if(op[mid][0]<=start&&op[mid][1]>=end)return 1;
        else if(op[mid][0]>=start){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    return 0;
}
int main() {
	long long n;
	cin>>n;
	vector<vector<long long>>op(n,vector<long long>(2,-1));
	vector<vector<long long>>op2(n,vector<long long>(2,-1));

	
	for(long long i=0;i<n;i++){
	    cin>>op[i][0]>>op[i][1];
	}
	
    sort(op2.begin(),op2.end());

    for(int i=0;i<n;i++){
        cout<<isNested(op[i][0],op[i][1],op2,n)<<" ";
    }

    for(int i=0;i<n;i++){
        cout<<isContains(op[i][0],op[i][1],op2,n)<<" ";
    }
    
	return 0;
}