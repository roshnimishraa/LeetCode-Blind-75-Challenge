APPROACH : BFS 

Time Complexity: O(N) where N is the total number of nodes in the tree.
Auxiliary Space: O(w) where w is the maximum width of the tree.

ALGORITHM : 
1. Take a queue add root node 
2. take maxSum=INT_MIN, resultLevel=0,currentLevel=1;
3. iterate till q is not empty
       initialize sum=0 
      take n = q.size()
i) Traverse all elements of a level of a node while(n--)
    take front node from q 
    pop it 

a) if current node has child either left or right then push into q 
4. if sum > maxSum then 
       maxSum = sum 
      resultLevel = currentLevel
5. move currentLevel++
6. return resultLevel


class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        int maxSum = INT_MIN;
        int resultLevel=0;
        int currentLevel=1;
    queue<TreeNode*> q;
q.push(root);
while(!q.empty())
{
    int sum=0;
// traverse all elements of curr level 
int n=q.size();
while(n--)
{
    TreeNode* temp = q.front();
    q.pop();
    // add front node into sum
    sum += temp->val;

// push child of curr node
if(temp->left != NULL){
    q.push(temp->left);
} 
if(temp->right != NULL)
{
    q.push(temp->right);
}

}
if(sum > maxSum){
    maxSum = sum;
    resultLevel=currentLevel;
}
currentLevel++;
}
return resultLevel;
    }
};
