SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
	
	// if head is null 
	if(head==nullptr){
		return nullptr;	
	}
	
	// delete node from 0 position
	if(position==0){
		SinglyLinkedListNode * temp = head;
		head = head->next;
		delete temp;
		return head;
	}
	
	
	positiion--;
	SinglyLinkedListNode * curr = head;
	SinglyLinkedListNode * prev = nullptr;
	
	while(position--){
		prev=curr;
		curr = curr->next;	
	}
	prev->next = curr->next;
	delete curr;
	
	
	return head;
	
}