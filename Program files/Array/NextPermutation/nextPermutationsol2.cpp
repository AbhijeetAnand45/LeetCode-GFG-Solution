
// Time complexity : O(n)
// Space complexity : O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(),i,k;
        
        for(i=n-2;i>=0;i--){
            if(nums[i] < nums[i+1]){
                break;
            }
        }
        if(i<0){
            reverse(nums.begin(),nums.end());
        }
        else{
            for(k=n-1;k>i;k--){
                if(nums[k]>nums[i]){
                    break;
                }
            }
            swap(nums[i],nums[k]);
            reverse(nums.begin()+i+1,nums.end());
        }
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
    s.nextPermutation(row);
    for(int i = 0; i < m; i++) {
        cout<<row[i]<<" ";
    }

    return 0;
}