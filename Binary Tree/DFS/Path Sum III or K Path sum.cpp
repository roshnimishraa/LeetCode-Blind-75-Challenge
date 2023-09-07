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
void helper(TreeNode* root,int k,int &count,vector<int> path)
{
if(root == NULL) return;
// curr node 
path.push_back(root->val);
// left subtree 
helper(root->left,k,count,path);
// right subtree
helper(root->right,k,count,path);

int n = path.size();
long long sum=0;
for(int i=n-1;i>=0;i--)
{
sum += path[i];
if(sum == k){
    count++;
}
}
path.pop_back();
}
public:
    int pathSum(TreeNode* root, int targetSum) {
        vector<int> path;
        int count=0;
    helper(root,targetSum,count,path);
    return count;
    }
};
