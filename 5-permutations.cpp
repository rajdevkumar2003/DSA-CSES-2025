#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    if (n <= 3) {
        if(n==1)cout<<1;
        else cout << "NO SOLUTION";
    }
    else {
        long long arr[n];
        vector<long long>nums;

        for (int i = 0; i < n; i++) {
            arr[i] = i+1;
        }
        
        int i=0;
        int j;
        if(n%2==1)j=(n/2)+1;
        else j=n/2;
        
        while(j<n){
            nums.push_back(arr[j]);
            nums.push_back(arr[i]);
            
            if(i==0&&n%2==1){
                nums.push_back(arr[j-1]);
            }
            i++;
            j++;
        }

        for(int i=0;i<n;i++){
            cout<<nums[i]<<" ";
        }


    }



    return 0;

}