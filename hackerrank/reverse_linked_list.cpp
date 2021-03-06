using namespace std;

/*
 * Complete the 'reverse' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts INTEGER_SINGLY_LINKED_LIST llist as parameter.
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist)
{
    stack<int> s;
    SinglyLinkedListNode* current = llist;
    while(current != nullptr)
    {
        s.push(current->data);
        current = current->next;
    }
    current = llist;
    while(current != nullptr)
    {
        current->data = s.top();
        s.pop();
        current = current->next;
    }
    return llist;
}
