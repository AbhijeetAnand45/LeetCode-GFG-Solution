// ProblemLink : https://leetcode.com/problems/rotate-image/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int x = matrix.size();
        int y = matrix[0].size();
        /*
        Brute force :-
        
        Take a new matrix and put each row of given matrix as the  
        colomn from last of new matrix. 
        Time : O(N^2) Space : O(N^2)
        int n = matrix.size();
        vector < vector < int >> rotated(n, vector < int > (n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                rotated[j][n - i - 1] = matrix[i][j];
            }
        }
        return rotated;
        
        
        Optimal :-
        Intution is to find transpose of the given matrix and then reverse each row to get answer.  
        Time : O(N^2) space : O(1)
        */
        for(int i=0;i<x;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        for(int i=0;i<x;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
       
    }
};

int main() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> matrix;
    for(int i = 0; i < n; i++) {
        vector<int> nums;
        for(int j = 0; j < m; j++) {
            int x;
            cin>>x;
            nums.push_back(x);
        }
        
        matrix.push_back(nums);
    }
    Solution s;
    s.rotate(matrix);

    
    return 0;
}