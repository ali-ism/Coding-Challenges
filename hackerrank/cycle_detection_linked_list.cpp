using namespace std;

// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool has_cycle(SinglyLinkedListNode* head)
{
    if(head==nullptr) return 0;
    unordered_map<SinglyLinkedListNode*, int> pointed_to;
    SinglyLinkedListNode* current = head;
    while(current!=nullptr)
    {
        if(pointed_to[current]) return 1;
        pointed_to[current] += 1;
        current = current->next;
    }
    return 0;
}
