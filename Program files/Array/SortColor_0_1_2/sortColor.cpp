// ProblemLink : https://leetcode.com/problems/sort-colors/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColor(vector<int>& nums) {
        /* first approach 
            you goona tell interviewer we can just sort it using stand stl function sort 
            and we will get our desired output 
            sort(nums.begin(),nums.end()); 
            Time complexity is O(nlogn) space : O(1)   */

        /* second Approach : 
         using counting sort as initialize 3 variables to count zero,one and two and 
         run loop to put the no of zero,one and two into nums by overwriting initial values.
         time complexity : O(n)+O(n) = O(2n) which is two pass algorithm. space : O(1) */

         /* Third and one Pass Algorithm 
          Dutch National flag Algorithm
         initialize three variable low to 0 mid to 0 and high to last index
         here (0 to low-1) will be 0 , (high+1 to n) will be 2.
             whenever mid is pointing to 0 : swap(arr[mid],arr[low]) low++,mid++;
         whenever mid is pointing to 2 : swap(arr[mid],arr[high]) high--,mid++;
         below is implementation */
        
        int low = 0,high = nums.size()-1,mid = 0;
        int n = nums.size();
        int i=0;
        while(mid<=high){
            if(nums[mid] == 0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else {
                swap(nums[mid],nums[high]);
                
                high--;
            }        
        }
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
    s.sortColor(nums);

    for(int i = 0; i < n; i++) {   
        cout<<nums[i]<<" ";
    }
    return 0;
}