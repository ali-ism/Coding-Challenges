/*
 * Complete the 'deleteNode' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER position
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

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position)
{
    if(position==0) llist = llist->next;
    else
    {
        SinglyLinkedListNode* current = llist;
        for(int i=0; i<position-1; i++) current = current->next;
        current->next = current->next->next;
    }
    return llist;
}
