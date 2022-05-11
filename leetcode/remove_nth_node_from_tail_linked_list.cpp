/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        if(!head->next) return nullptr;
        
        ListNode* ptr1=head, *ptr2=head;
        int len{0};
        
        for(int i=0; i<n; ++i)
        {
            ptr2=ptr2->next;
            if(ptr2==nullptr) //this means n==length of list
            {
                head = head->next;
                return head;
            }
        }
        
        while(ptr2->next)
        {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        
        ptr1->next = ptr1->next->next;
        
        return head;
    }
};
