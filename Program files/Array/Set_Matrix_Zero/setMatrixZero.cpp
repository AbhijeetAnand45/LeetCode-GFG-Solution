// Time complexity : O(n^2)
// Space complexity : O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int x = matrix.size();
        int y = matrix[0].size();
        bool isCol = false;
        for(int i=0;i<x;i++){
            if(matrix[i][0] == 0){
                isCol = true;
            }
            for(int j=1;j<y;j++){
                if(matrix[i][j] == 0){
                   matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        
        for(int i=1;i<x;i++){
            for(int j=1;j<y;j++){
               if(matrix[i][0] == 0 or matrix[0][j] == 0){
                   matrix[i][j] = 0;
               }
            }
        }
        
        if(matrix[0][0] == 0){
            for(int j=0;j<y;j++){
                matrix[0][j] = 0;
            }
        }
        if(isCol){
            for(int i=0;i<x;i++){
                matrix[i][0] = 0;
            }
        }
        
        
       
        
    }
};

int main() {
    int n, m;
    cin>>n>>m;
    vector<vector<int>> matrix;

    for(int i = 0; i < n; i++) { 
        vector<int> row;
        for(int j = 0; j < m; j++) {
            int temp;
            cin>>temp;
            row.push_back(temp);
        }
        matrix.push_back(row);
    }
    Solution s;
    s.setZeroes(matrix);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;


}