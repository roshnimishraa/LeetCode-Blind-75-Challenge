
Approach : RECURSION + vector to store right view 

TC : O(N) 
SC : O(H) 

level=0
Algorithm 
1. to get right view LAST NODE OF EVERY LEVEL MUST BE INSERTED 
So, if Level == ans.size then push element 
2. recursion call for left and right subtree
3. return ans


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
