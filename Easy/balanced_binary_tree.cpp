class Solution {
public:
    bool ans = true;
    int solve(TreeNode *root){
        if(!root)
            return 0;
        int lh = solve(root -> left);
        int rh = solve(root -> right);
        if(abs(lh - rh ) > 1)
            ans = false;
        return 1 + max(lh,rh); 
    }
    bool isBalanced(TreeNode* root) {
        solve(root);
        return ans;
    }
};
