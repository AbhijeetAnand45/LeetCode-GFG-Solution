
// Time complexity : O(n)
// Space complexity : O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += nums[i];
             if(sum > maxi)
                maxi = sum;
            
            if(sum < 0){
                sum = 0;
            }
          
        }
        return maxi == INT_MIN ? -1 : maxi;
    }
};

int main() {
     int m;
    cin>>m;
    vector<int> row;
    for(int j = 0; j < m; j++) {
        int temp;
        cin>>temp;
        row.push_back(temp);
    }
    
    Solution s;
    int ans = s.maxSubArray(row);
    cout<<ans<<"\n";

    return 0;
}