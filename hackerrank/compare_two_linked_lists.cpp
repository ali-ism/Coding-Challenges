// Complete the compare_lists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2)
{
    SinglyLinkedListNode* current1 = head1;
    SinglyLinkedListNode* current2 = head2;
    while(current1!=nullptr && current2!=nullptr)
    {
        if(current1->data != current2->data) return 0;
        current1 = current1->next;
        current2 = current2->next;
    }
    if((current1==nullptr && current2!=nullptr)
    || (current1!=nullptr && current2==nullptr))
    return 0;
    return 1;
}
