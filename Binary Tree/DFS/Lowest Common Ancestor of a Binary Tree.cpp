Brute Force : 
TC : O(N)
SC : O(N)

1. store path till p 
2. store path till q 
3. compare both the nodes one by one if equal then do i++ if not equal return prev node 
it is LCA of p and q

Efficient Approach : DFS + RECURSION 
TC : O(N) 
SC : O(1) 
  EG. LCA (4,7) 
1. corner case if given node is root node then return root
2. traverse left and right 
i) if p found return from their find q 
3. if left is NULL then there is chances getting node in right then return right 
4. if right == NULL then return left
5. if left and right are not NULL that means it is a LCA of node p and q 


class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
  if(root==NULL || root == p || root == q){
      return root;
  }      
TreeNode* left=lowestCommonAncestor(root->left,p,q);
TreeNode* right= lowestCommonAncestor(root->right,p,q);

if(left == NULL){
    //chances of getting answer from right
return right;
}
else if(right == NULL)
{
    // chances of getting answer from left
    return left;
}
else{
    // parent node found 
    return root;
}
    }
};
