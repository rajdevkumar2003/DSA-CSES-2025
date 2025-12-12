#include <bits/stdc++.h>
using namespace std;

int main() {
	
	long long n,m;
	cin>>n>>m;
    vector<pair<long long,long long>>op;
	long long arr[n];
	for(long long i=0;i<n;i++){
	    cin>>arr[i];
	}
    for(long long i=0;i<m;i++){
        long long n1,n2;
        cin>>n1>>n2;
        op.push_back({n1-1,n2-1}); //for reducing the indexing confusion
    }

    unordered_map<long long,long long>mpp;
    long long currOp=0;
    for(long long i=0;i<n;i++){
        if(mpp.find(arr[i]-1)==mpp.end()){
            currOp++;
        }
        mpp[arr[i]]=i;
    }
	
	for(long long i=0;i<m;i++){
	    long long n1=op[i].first;
        long long n2=op[i].second;
        if(n1>n2)swap(n1,n2); //beacuse we are considering n1<n2 (yelog aage peeche bhi ip de skte h fasane k liye)
        long long num1=arr[n1];
        long long num2=arr[n2];

        if(num1>1&&mpp[num1-1]>n1&&mpp[num1-1]<n2)currOp--;
        if(num1<n&&mpp[num1+1]>n1&&mpp[num1+1]<n2)currOp++;
        if(num2>1&&mpp[num2-1]<n2&&mpp[num2-1]>n1)currOp++;
        if(num2<n&&mpp[num2+1]<n2&&mpp[num2+1]>n1)currOp--;

        if(num1==num2+1)currOp--;
        if(num1==num2-1)currOp++;

        swap(arr[n1],arr[n2]);
        mpp[num1]=n2;
        mpp[num2]=n1;

        cout<<currOp<<endl;
	}
	
	return 0;

}