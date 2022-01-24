// ProblemLink : https://leetcode.com/problems/merge-intervals/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<pair<int, int>> MergeInterval(vector<pair<int,int>>& matrix) {

    /* Brute Force :-       

        Time Complexity: O(NlogN)+O(N*N). O(NlogN) for sorting the array, and O(N*N) 
        because we are checking to the right for each index which is a nested loop.
        Space Complexity: O(N), as we are using a separate data structure.
    */

        vector<pair<int,int>> ans;
        int n = matrix.size();
        sort(matrix.begin(),matrix.end());

        for(int i=0;i<n;i++) {
            int start = matrix[i].first, end = matrix[i].second;

            if(!ans.empty()){
                if(start <= ans.back().second){
                    continue;
                }
            }

            for(int j=i+1;j<n;j++) {
                if(matrix[j].first < end){
                    end = matrix[j].second;
                }
            }

            ans.push_back({start,end});
        }

        return ans;

        /*

        Approach 2 :-
        Approach: Linearly iterate over the array if the data structure is empty insert the interval 
        in the data structure. If the last element in the data structure overlaps with the current 
        interval we merge the intervals by updating the last element in the data structure, 
        and if the current interval does not overlap with the last element in the data structure 
        simply insert it into the data structure.

        Intuition: Since we have sorted the intervals, the intervals which will be 
        merging are bound to be adjacent. We kept on merging simultaneously as we were 
        traversing through the array and when the element was non-overlapping we simply 
        inserted the element in our data structure.
        
        
        vector<vector<int>> ans;
        int n = arr.size();
        sort(arr.begin(), arr.end());
        for(int i = 0; i < n; i++) {
            if(ans.empty() || ans.back()[1] < arr[i][0]){
                ans.push_back({arr[i][0],arr[i][1]});
            }
            else{
                ans.back()[1] = max(ans.back()[1],arr[i][1]);
            }
        }
        return ans;


        Time Complexity: O(NlogN) + O(N). O(NlogN) for sorting and O(N) for traversing through 
        the array.

        Space Complexity: O(N) to return the answer of the merged intervals.
        */
    
       
    }
};

int main() {
    int n,m;
    cin>>n>>m;
    vector<pair<int, int>> matrix;
    for(int i = 0; i < n; i++) {
        int x,y;
        cin>>x>>y;
        
        matrix.push_back({x,y});
    }
    Solution s;
    vector<pair<int,int>> ans = s.MergeInterval(matrix);

    for(int i=0;i<n;i++) {
        cout<<ans[i].first<<","<<ans[i].second<<"\n";
    }
    
    return 0;
}