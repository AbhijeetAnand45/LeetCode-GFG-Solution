// ProblemLink : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& arr) {
        /* 
        Naive Approach :- 
        Intuition: We can simply use 2 loops and track every transaction and 
        maintain a variable maxPro to contain the max value among all transactions.
        Approach: 
            Use a for loop of ‘i’ from 0 to n.
            Use another for loop from ‘i+1’ to n.
            If arr[j] > arr[i] , take the difference and compare and store it in the maxPro variable.
            Return maxPro.
        Time complexity: O(n^2)
        Space Complexity: O(1) 
        
        Code : 
            int maxPro = 0;
            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    if (arr[j] > arr[i]) {
                    maxPro = max(arr[j] - arr[i], maxPro);
                    }
                }
            }
            return maxPro;
        */

       /* Soltuion 2:Optimal solution 

        Intuition: We will linearly travel the array. We can maintain a minimum from the 
        starting of the array and compare it with every element of the array, 
        if it is greater than the minimum then take the difference and maintain it in max, 
        otherwise update the minimum.
        Time : O(n)
        Space : O(1)
        Code : 
        int n = arr.size();
        int maxPro = 0;
        int minPrice = INT_MAX;
        for (int i = 0; i < n; i++) {
            minPrice = min(minPrice, arr[i]);
            maxPro = max(maxPro, arr[i] - minPrice);
        }
        return maxPro;  
        */

    }
};

int main() {
    int n;
    cin>>n;
    vector<int> nums;
    for(int i = 0; i < n; i++) {
        int x;
        cin>>x;
        nums.push_back(x);
    }
    Solution s;
    int ans = s.maxProfit(nums);
    cout<<ans<<"\n";
    return 0;


}