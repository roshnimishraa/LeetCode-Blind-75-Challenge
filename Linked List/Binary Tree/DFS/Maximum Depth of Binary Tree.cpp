class Solution {
public:
    int maxDepth(TreeNode* root) {
    if(root == NULL) return 0;
int left = maxDepth(root->left);
int right= maxDepth(root->right);
int ans = 1 + max(left,right);
return ans;
    }
};
