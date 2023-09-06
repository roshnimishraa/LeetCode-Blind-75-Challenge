TC : O(N) 
SC : O(1) 

Approach : Two Pointer 

Algorithm 
1. Take Two pointers Odd and Even to segregate odd List and Even List
    odd pointer initially points to head
   even pointer initially points to head->next 

2. To connect odd and even list use startOfEven pointer which pointer head->next 
3. Iterate till even != NULL && even -> next != NULL
  Eg. a b  c d e
i) connect all odd nodes according to index
    odd->next = even->next
ii) connect all even nodes according to index
     even->next = even->next->next;
iii) Move odd and even pointer from head
      odd = odd->next
      even = even->next
4.  Connect odd list to even list 
    odd->next = startOfEven
5. return head

  
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
          if(head == NULL || head->next == NULL) 
     return head;

     ListNode* odd = head;
     ListNode* even = head->next;
     ListNode* startOfEven = head->next;
   
    while(even != NULL && even->next != NULL)
    {
    // connect odd node 
     odd->next = even->next;
    //  connect even node 
    even->next = even->next->next;

    // move pointer 
    odd = odd->next;
    even = even->next;
    }   
    // connect odd and even Linked List
odd->next = startOfEven;
return head;
    }
};
