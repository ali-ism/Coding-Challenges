// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data)
{
    SinglyLinkedListNode* node = new SinglyLinkedListNode(data);
    if(head==nullptr) head = node;
    else
    {
        SinglyLinkedListNode* tail = head;
        while(tail->next!=nullptr) tail = tail->next;
        tail->next = node;
    }
    return head;
}
