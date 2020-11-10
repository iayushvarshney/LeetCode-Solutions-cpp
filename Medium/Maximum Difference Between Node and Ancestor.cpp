class Solution {
public:
    int maxAncestorDiff(TreeNode* root, int minV = INT_MAX, int maxV = INT_MIN) {
        return root ? max(maxAncestorDiff(root->left, minV = min(minV, root->val), maxV = max(maxV, root->val)), maxAncestorDiff(root->right, minV, maxV)) : maxV - minV;
    }
};
