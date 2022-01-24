#include<bits/stdc++.h>
using namespace std;


//   Definition for a binary tree node.
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
/*
 Solution 1 : Iterative Solution Using Stack
 Time Complexity: O(N).
 Reason: We are traversing N nodes and every node is visited exactly once.
 Space Complexity: O(N)
 Reason: In the worst case (a tree with just left children), the space complexity will be O(N).
*/
class Solution {
public:
    vector<int> v;
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> s;
        while(root||!s.empty()){
            if(root!=NULL){
                s.push(root);
                root=root->left;
            }
            else{
                root=s.top();
                s.pop();
                v.push_back(root->val);
                root=root->right;
            }
          }
         return v;
    }
};

/* 
Solution 2 : Recursive Traversal 
 Time Complexity: O(N).
Reason: We are traversing N nodes and every node is visited exactly once.

Space Complexity: O(N)
Reason: Space is needed for the recursion stack. 
In the worst case (skewed tree), space complexity can be O(N).
 
class Solution {
 public:
     vector<int> ans;
     vector<int> inorderTraversal(TreeNode* root) {
          if(root == NULL){
             return ans;
         }
        inorderTraversal(root->left);
         ans.push_back(root->val);
       
         inorderTraversal(root->right);
        
         return ans;
     }
 };
*/

/*

Solution 3 : Morris Traversal : To UnderStand
Time Complexity: O(N).
Space Complexity: O(1)
Reason: We are not using recursion.

vector < int > inorderTraversal(node * root) {
  vector < int > inorder;

  node * cur = root;
  while (cur != NULL) {
    if (cur -> left == NULL) {
      inorder.push_back(cur -> data);
      cur = cur -> right;
    } else {
      node * prev = cur -> left;
      while (prev -> right != NULL && prev -> right != cur) {
        prev = prev -> right;
      }

      if (prev -> right == NULL) {
        prev -> right = cur;
        cur = cur -> left;
      } else {
        prev -> right = NULL;
        inorder.push_back(cur -> data);
        cur = cur -> right;
      }
    }
  }
  return inorder;
}

*/

int main(){
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(6);
    root->left->left= new TreeNode(8);
    root->left->right = new TreeNode(9);
    root->right = new TreeNode(7);
    root->right->left = new TreeNode(10);
    root->right->right = new TreeNode(11);
    root->right->left->left = new TreeNode(12);
    Solution s;
    vector<int> ans = s.inorderTraversal(root);
    return 0;

}
