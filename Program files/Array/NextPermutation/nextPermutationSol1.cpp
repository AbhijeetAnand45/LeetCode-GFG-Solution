
// Time complexity : O(n^2)
// Space complexity : O(n^2)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        bool val = next_permutation(nums.begin(),nums.end());
        if(val == false){
            sort(nums.begin(),nums.end());
            for(int i=0;i<nums.size();i++){
                cout<<nums[i]<<" ";
            }
        }
        else{
            for(int i=0;i<nums.size();i++){
                cout<<nums[i]<<" ";
            }
            
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

    return 0;
}