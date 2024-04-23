SinglyLinkedListNode *insertNodeAtTail(SinglyLinkedListNode *head, int data)
{

    SinglyLinkedListNode *newData = new SinglyLinkedListNode(data);
    if (head == nullptr)
    {
        head = newData;
    }
    else
    {
        SinglyLinkedListNode *mover;
        mover = head;
        while (mover->next!= nullptr)
        {
           mover = mover->next;
        }
        mover->next = newData;
    }
    return head;
}

