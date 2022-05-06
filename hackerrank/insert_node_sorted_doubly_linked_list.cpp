/*
 * Complete the 'sortedInsert' function below.
 *
 * The function is expected to return an INTEGER_DOUBLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_DOUBLY_LINKED_LIST llist
 *  2. INTEGER data
 */

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */

DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data)
{
    DoublyLinkedListNode* new_node = new DoublyLinkedListNode(data);
    if(!llist) llist = new_node;
    else if(llist->data > data)
    {
        new_node->next = llist;
        llist->prev = new_node;
        llist = new_node;
    }
    else
    {
        DoublyLinkedListNode* current = llist;
        while(current)
        {
            if(!current->next)
            {
                current->next = new_node;
                new_node->prev = current;
                return llist;
            }
            else if(current->next->data > data)
            {
                current->next->prev = new_node;
                new_node->next = current->next;
                new_node->prev = current;
                current->next = new_node;
                return llist;
            }
            current = current->next;
        }
    }
    return llist;
}
