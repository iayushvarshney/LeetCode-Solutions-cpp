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
    #define ll long long
    ll prev=-3e9;
    
    bool isValidBST(TreeNode* root) {
        if(!root)
            return 1;
        return isValidBST(root->left) && (root->val>prev) && ((prev=root->val)||1) && isValidBST(root->right);
    }
};
