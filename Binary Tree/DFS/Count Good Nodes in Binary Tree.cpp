Time Complexity: O(N) where N is the total number of nodes. Because it traverses all the nodes at least once.
Auxiliary Space: O(1) if no recursion stack space is considered. Otherwise, O(h) where h is the height of the tree

Approach : Inorder Traversal

ALGORITHM :
1. do inorder traversal during traversal take maxi and count 
2. update root val as maxi
if(maxi < root->val) maxi = root->val
3. do left traversal 
4. if root is greater its child node then it is good node 
  if(root->val >= maxi) count++ 
  maxi = root->val
5. do right traversal
6. return count
  
class Solution {
    private:
    void inorder(TreeNode* root,int &count,int maxi)
    {
        if(root==NULL) return ;
if(maxi<root->val)
{
    maxi = root->val;
}
// left traversal
   inorder(root->left,count,maxi);
// root
if(root->val >= maxi)
{
    count++; // smaller value mil gyi
    maxi = root->val;
}
// right traversal 
inorder(root->right,count,maxi);
    }
public:
    int goodNodes(TreeNode* root) {
        int count=0;
        int maxi=root->val;
inorder(root,count,maxi);
return count;
    }
};
