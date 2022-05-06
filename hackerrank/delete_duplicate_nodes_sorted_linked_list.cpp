/*
 * Complete the 'removeDuplicates' function below.
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

SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist)
{
    SinglyLinkedListNode* ptr1=llist, * ptr2=llist;
    while(ptr2->next!=nullptr)
    {
        ptr2 = ptr2->next;
        if (ptr2->data==ptr1->data) ptr1->next = ptr2->next;
        else ptr1 = ptr1->next;
    }
    return llist;
}
