/*
 * Complete the 'insertNodeAtPosition' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER data
 *  3. INTEGER position
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

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position)
{
    SinglyLinkedListNode* node = new SinglyLinkedListNode(data);
    if(llist==nullptr) llist = node;
    else
    {
        SinglyLinkedListNode* current = llist;
        for(int i=0; i<position-1; i++) current = current->next;
        node->next = current->next;
        current->next = node;
    }
    return llist;
}
