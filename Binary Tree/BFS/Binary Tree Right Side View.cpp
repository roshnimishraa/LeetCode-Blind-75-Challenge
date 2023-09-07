Approach : RECURSION + vector to store right view 

TC : O(N) 
SC : O(H) 

level=0
Algorithm 
1. to get right view LAST NODE OF EVERY LEVEL MUST BE INSERTED 
So, if Level == ans.size then push element 
2. recursion call for left and right subtree
3. return ans

// For Right Side View : Reverse Preorder
// Right Root Left
// For Left Side View 
//   Left Root Right 
class Solution {
    private:
void recursion(TreeNode* root,int level,
vector<int> &ans)
{
    if(root==NULL) return;
// when to push item in vector
if(level == ans.size()) ans.push_back(root->val);
// right
recursion(root->right,level+1,ans);
// left
recursion(root->left,level+1,ans);

}
public:
    vector<int> rightSideView(TreeNode* root) {
vector<int> ans;
int level=0;
recursion(root,level,ans); 
return ans;
    }
};
