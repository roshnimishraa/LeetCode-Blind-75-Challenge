Approach : Two Pointer 

Time Complexity: O(n). 
Only one traversal of the linked list is needed
Auxiliary Space: O(1). 
As no extra space is needed.

Algorithm 
1. Take two pointer slow initially initialized to head 
2. Take a prev pointer initially initialized to NULL
3. Iterate till fast != NULL && fast->next != NULL
      move fast by 2 step fast = fast->next->next
      move prev = slow (Pointer before slow) 
     move slow by 1 step slow = slow->next 
4. After the execution of loop slow pointer to middle node and prev points before mid node 
     skip middle node and points to next of mid node
 prev->next = prev->next->next
5. return head


class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow = head; 
        ListNode* prev=NULL;
if(head == NULL) return NULL;
if(head->next == NULL) return NULL;
    while(fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
                prev = slow;
        slow = slow->next;

    }
// prev points before slow pointer 
 prev->next = prev->next->next;
  return head;
    }
};
