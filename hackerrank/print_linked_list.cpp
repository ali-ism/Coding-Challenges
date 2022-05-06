// Complete the printLinkedList function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void printLinkedList(SinglyLinkedListNode* head)
{
    if(head == nullptr) return;
    cout << head->data << "\n";
    printLinkedList(head->next);
}
