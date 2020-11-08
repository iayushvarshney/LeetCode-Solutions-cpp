class Solution {
public:
    int findTiltSum(TreeNode *root, 
                    int &tilt) {
        if(!root)
            return 0;
        int left = findTiltSum(root->left, tilt);
        int right = findTiltSum(root->right, tilt);
        
        // compute current tilt sum
        tilt += abs(left - right);
        return left + right + root->val;
    }
    
    int findTilt(TreeNode* root) {
        int tilt = 0;
        findTiltSum(root, tilt);
        return tilt;
    }
};
