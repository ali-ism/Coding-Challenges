using namespace std;

/*
 * Complete the 'reversePrint' function below.
 *
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

void reversePrint(SinglyLinkedListNode* llist)
{
    stack<int> s;
    SinglyLinkedListNode* current = llist;
    while(current != nullptr)
    {
        s.push(current->data);
        current = current->next;
    }
    while(!s.empty())
    {
        cout << s.top() << "\n";
        s.pop();
    }
}
