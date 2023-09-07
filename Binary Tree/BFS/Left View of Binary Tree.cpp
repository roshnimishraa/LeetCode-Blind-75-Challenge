void recursion(Node *root,int level,vector<int> &ans)
{
    if(root==NULL) return;
if(level==ans.size()) ans.push_back(root->data);

// left 
recursion(root->left,level+1,ans);
// right
recursion(root->right,level+1,ans);
}
//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
  vector<int> ans;
  int level=0;
  recursion(root,level,ans);
  return ans;
}
