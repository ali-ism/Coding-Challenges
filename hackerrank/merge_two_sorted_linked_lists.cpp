// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2)
{
    if(head1==nullptr) return head2;
    if(head2==nullptr) return head1;
    SinglyLinkedListNode* current1=head1,* current2=head2;
    SinglyLinkedListNode temp = SinglyLinkedListNode(-1);
    SinglyLinkedListNode* llist = &temp;
    while(current1!=nullptr && current2!=nullptr)
    {
        if(current1->data <= current2->data)
        {
            llist->next = current1;
            current1 = current1->next;
        }
        else
        {
            llist->next = current2;
            current2 = current2->next;
        }
        llist = llist->next;
    }
    if(current1!=nullptr) llist->next = current1;
    else llist->next = current2;
    return temp.next;
}
