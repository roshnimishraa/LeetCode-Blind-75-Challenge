Given : Linked List is of even length 

TC : O(N),traverse 
SC : O(N), vector 

Approach1 : Use a vector 

Algorithm 
1. Insert all the values till head != NULL of Linked list in vector 
2.
i) Initialize two pointers i and j
 i=0, j=n-1
ii) initlialize maxSum=0,sum=0
3. Iterate till i<j
   sum = nums[i]+nums[j] 
  maxSum = max(maxSum,sum) 

ii) move i and j pointer 
       i++
       j-- 
  4. return maxSum 

class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int> ans;
        while(head != NULL)
        {
            ans.push_back(head->val);
            head = head->next;
        }
        int n = ans.size();
        int i=0,j=n-1;
      int sum=0;
      int maxSum=0;
        while(i<j){
      sum=ans[i]+ans[j];
          maxSum=max(maxSum,sum);
      i++;
      j--;
       }
     return maxSum;
    }
};


########################################################################################################################################

Approach 2 : Stack 

Algorithm 
1. push all the Linked List item in a Linked List and move pointer 
2. initialize count = 1 and result =0 
  iterate till half of LL and stack top 
move head pointer 
pop from stack 
increase count pointer 
3. return result 

  
class Solution {
public:
    int pairSum(ListNode* head) {
        stack<int> st;
      ListNode* curr = head;
    
      while(curr != NULL){
        st.push(curr->val);
        curr = curr->next;
      }
    int n=st.size();
  // standing at first node
int count=1;
int result=0;
curr = head;
while(count<=n/2)
{
  result = max(result,curr->val+st.top());
  curr = curr->next;
  st.pop();
  count++;
}
    
    return result;
    }
};

#############################################################################################################

Approach 3 : Linked List 

Algorithm : 
1. Find mid node 
2. Reverse(mid->next) 2nd half of Linked List
3. curr =head 
   mid = slow (starting point of 2nd half of Linked List)
4. while(mid != NULL) 
   val = curr->val + mid->val 
     pointer curr and mid pointer
5. return result

class Solution {

public:
    int pairSum(ListNode* head) {
    ListNode* fast = head;
    ListNode* slow = head;
  while(fast != NULL && fast->next != NULL)
  {
    slow = slow->next;
    fast = fast->next->next;
  }
ListNode* mid = slow;

ListNode* prev = NULL;
ListNode* nextNode = NULL;
while(mid != NULL)
{
  nextNode = mid->next;
 mid->next = prev; //reverse pointer
 prev = mid;
 mid = nextNode;
}

 // 3. find max result 
 int result =0;
 ListNode* curr = head;
 while(prev != NULL)
 {
   result = max(result, curr->val+prev->val);
   curr = curr->next;
   prev = prev->next;
 } 
 return result;
    }
};

