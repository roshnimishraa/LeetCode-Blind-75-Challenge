Time Complexity: O(N), where N is the number of nodes in the tree
Space Complexity: O(N), where N is the number of nodes in the tree 

Approach : DFS + RECURSION + PREORDER TRAVERSAL

ALGORITHM
    take sum=0,count=0 and vector<int> path
1. First store curr root val in vector 
2. traverse left and right subtree 
3. iterate nodes till vector size 
   add nodes sum+= path[i]
i) if sum == targetSum then increment count do 
    count++
4. while backtracking remove previous nodes 
 path.pop_back()
5. return count


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
    void helper(TreeNode* root,int targetSum,
    vector<int> path,int &count)
    {
        if(root == NULL) return;
// push curr node value into vector
path.push_back(root->val);
// left subtree 
helper(root->left,targetSum,path,count);
// right subtree 
helper(root->right,targetSum,path,count);
// insert node dfs traversal 
int n=path.size();
long long sum=0;

for(int i=n-1;i>=0;i--)
{
// add sum of nodes
sum += path[i];
// if targetSum found
if(sum == targetSum){
    count++;

}
}
// remove node
path.pop_back();
    }
public:
    int pathSum(TreeNode* root, int targetSum) {
        vector<int> path;
        int count=0;
        helper(root,targetSum,path,count);
    return count;
    }
};
