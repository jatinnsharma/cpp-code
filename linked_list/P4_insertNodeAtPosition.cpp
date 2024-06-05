
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode * newData = new SinglyLinkedListNode(data);
    if(head==nullptr){
        head=newData;
    }
    else{
        SinglyLinkedListNode * temp = head;
        position--;
        while(position--){
            temp =temp->next;
        }
        newData->next=temp->next;
        temp->next=newData;
    }
    
    return head;
}
