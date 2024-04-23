SinglyLinkedListNode *insertNodeAtHead(SinglyLinkedListNode *head, int data)
{
    SinglyLinkedListNode *newNode = new SinglyLinkedListNode(data);

    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }

    return head;
}
