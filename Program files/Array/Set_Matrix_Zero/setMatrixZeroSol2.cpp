
// Time complexity : O(n^2)
// Space complexity : O(n)

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int x = matrix.size();
        int y = matrix[0].size();
        set<int> s1;
        set<int> s2;
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                if(matrix[i][j] == 0){
                    s1.insert(i);
                    s2.insert(j);
                }
            }
        }
        
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                if(s1.find(i) != s1.end() || s2.find(j) != s2.end()){
                    matrix[i][j] = 0;
                }
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