// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2)
{
    SinglyLinkedListNode* current1=head1, *current2=head2;
    int data;
    while(current1 and current2)
    {
        if(current1==current2)
        {
            data=current1->data;
            break;
        }
        current1 = current1->next;
        current2 = current2->next;
        if(!current1) current1 = head2;
        if(!current2) current2 = head1;
    }
    return data;
}
