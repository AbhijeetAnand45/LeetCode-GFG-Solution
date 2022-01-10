
// Time complexity : O(n^2)
// Space complexity : O(n^2)

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=0;i<numRows;i++){
            vector<int> temp(i+1,1);
            for(int j=1;j<i;j++){
                temp[j] = ans[i-1][j] + ans[i-1][j-1];
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
int main() {
    int n;
    cin>>n;
    
    Solution s;
    vector<vector<int>> ans = s.generate(n);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
   
    return 0;


}