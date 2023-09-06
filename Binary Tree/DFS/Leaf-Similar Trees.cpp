Approach : DFS

Logic:
Here firstly we will store the nodes in stack whose left and right nodes are NULL . Then return true if both the stack are equal else false

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
  private:
  void dfs(TreeNode* root,vector<int> &ans)
  {
    if(root == NULL) return;
    if(root->left == NULL && root->right == NULL)
    {
      ans.push_back(root->val);
    }
    dfs(root->left,ans);
    dfs(root->right,ans);
  }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> ans1,ans2;
        dfs(root1,ans1);
        dfs(root2,ans2);
        return ans1==ans2;
    }
};
