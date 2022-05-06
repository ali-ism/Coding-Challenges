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
    bool isPalindrome(ListNode* head)
    {
        std::deque<int> dq;
        ListNode* ptr = head;
        while(ptr)
        {
            dq.push_front(ptr->val);
            ptr = ptr->next;
        }
        while(dq.size()>1)
        {
            if(dq.front()!=dq.back()) return false;
            dq.pop_front();
            dq.pop_back();
        }
        return true;
    }
};
