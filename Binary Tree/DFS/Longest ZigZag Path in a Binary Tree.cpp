Approach 1 : Search either from left and right subtree return max path
take maxpath=0,steps=0,bool goLeft
1. traverse left do steps+1
i) for zig zag traversal move right and start steps =1 
2. traverse right do steps+1 
3. return maxPath

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
void helper(TreeNode* root,int &maxPath,int steps,bool goLeft)
{
    if(root == NULL) return;
    maxPath = max(maxPath,steps);
if(goLeft == true)
{
helper(root->left,maxPath,steps+1,false);
helper(root->right,maxPath,1,true);
}
else{
    helper(root->left,maxPath,1,false);
    helper(root->right,maxPath,steps+1,true);
}
}
public:
    int longestZigZag(TreeNode* root) {
        int maxPath=0;
        int steps =0;
        helper(root,maxPath,steps,false); //go right
        helper(root,maxPath,steps,true); //go left
  return maxPath;
    }
};

############### Approach 2 : store count of left and right nodes 

initially helper(maxPath,left,right)
Key Point : for making ZigZag 
if a node is going left then it must go for right children and
do helper(maxPath,left+1,right)

  // Recursive call 
  helper(root->left,right+1,0)
  helper(root->right,0,left+1);

  Algorithm 
take (maxPath,left,right)
1. find maxPath
2. recursive call from left and right w.r.t zig-zag traversal


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
void helper(TreeNode* root,int left,int right,int &maxPath)
{
    // corner case 
if(root == NULL) return;

// find maxPath
maxPath = max({maxPath,left,right});
 
// Recursive call for left subtree & zigzag path
helper(root->left, right+1, 0,maxPath);

// recursive call for right subtree
helper(root->right, 0, left+1,maxPath);
}
public:
    int longestZigZag(TreeNode* root) {
    
        int maxPath=0;
    helper(root,0,0,maxPath);
    return maxPath;
    }
};
