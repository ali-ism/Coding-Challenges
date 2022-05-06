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
    ListNode* middleNode(ListNode* head)
    {
        ListNode* ptr = head;
        
        int len{0};
        while(ptr)
        {
            len++;
            ptr = ptr->next;
        }
        
        int pos{0};
        ptr = head;
        while(pos < len/2)
        {
            pos++;
            ptr = ptr->next;
        }
        return ptr;
    }
};
