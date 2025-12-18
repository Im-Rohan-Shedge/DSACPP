/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
     TreeNode* fun(vector<int>& nums,int n,int m){
        if(n>m) return nullptr;
        int mid=n+(m-n)/2;
        TreeNode* root=new TreeNode(nums[mid]);
        root->left=fun(nums,n,mid-1);
        root->right=fun(nums,mid+1,m);
        
        return root; 
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
       return fun(nums,0,nums.size()-1); 
    }
};