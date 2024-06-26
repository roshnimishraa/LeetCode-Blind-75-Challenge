// Recursive Approach 
TC: O(N) 
SC: O(N) 


class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next == NULL) return head;
        // recursive method 
ListNode* rest_head = reverseList(head->next);
ListNode* rest_tail = head->next;

rest_tail->next = head;
head->next = NULL;

return rest_head;
    }
};
