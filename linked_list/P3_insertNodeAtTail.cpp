SinglyLinkedListNode *insertNodeAtTail(SinglyLinkedListNode *head, int data)
{

    SinglyLinkedListNode *newData = new SinglyLinkedListNode(data);
    if (head == nullptr)
    {
        head = newData;
    }
    else
    {
        mover = head;
        while (mover!= nullptr)
        {
           mover = mover->next;
        }
        mover->next = newData;
    }
    return head;
}
