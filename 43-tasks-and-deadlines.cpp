// #include <bits/stdc++.h>
// using namespace std;


// static bool cmp(pair<long long,pair<long long,long long>>&a, pair<long long,pair<long long,long long>>&b){
//     if(a.first==b.first){
//         return a.second.first>b.second.first;
//     }
//     return a.first<b.first;
// }
// int main() {
// 	long long n;
//     cin>>n;

//     long long ans=0;

//     vector<pair<long long,long long>>arr(n);

//     for(long long i=0;i<n;i++){
//         cin>>arr[i].first>>arr[i].second;
//     }

//     vector<pair<long long,pair<long long,long long>>>op;

//     for(long long i=0;i<n;i++){
//         op.push_back({arr[i].second-arr[i].first,{arr[i].first,arr[i].second}});
//     }
//     sort(op.begin(),op.end(),cmp);
//     long long time=0;

//     for(long long i=0;i<n;i++){
//         long long finish=time+op[i].second.first;
//         long long deadline=op[i].second.second;

//         ans+=(deadline-finish);
//         time=finish;
//     }

//     cout<<ans;

    
// 	return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    vector<pair<long long,long long>> arr(n);

    for(int i=0;i<n;i++)
        cin >> arr[i].first >> arr[i].second;

    sort(arr.begin(), arr.end());   // sort by duration

    long long time = 0;
    long long ans = 0;

    for(int i=0;i<n;i++){
        time += arr[i].first;
        ans += arr[i].second - time;
    }

    cout << ans;
}