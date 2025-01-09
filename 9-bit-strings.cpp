#include <bits/stdc++.h>
using namespace std;
const long long MOD=1e9+7;
long long solve(long long cnt, long long n, vector<long long>&dp){
    if(cnt==n)return 1;
    if(dp[cnt]!=-1)return dp[cnt]%MOD;
    
    long long take1=solve(cnt+1,n,dp)%MOD;
    long long take0=solve(cnt+1,n,dp)%MOD;
    
    return dp[cnt]= (take1+take0)%MOD;
}
int main() {
	long long n;
	cin>>n;
	vector<long long>dp(n+1,-1);
	long long cnt=0;
	long long ans=solve(cnt,n,dp)%MOD;
	cout<<ans;
	return 0;

}
