Node *deleteNode(Node *head, int pos)
{
    // Write your code here.
	if(head==NULL){
		return head;
	}

	if(pos==0){
		Node *curr=head;
		head=head->next;
		delete curr;
		return head;
	}
	
	Node *curr=head;
	Node *prev=nullptr;
	int count=-1;

	while(curr!=NULL){
		count++;
		if(count==pos){
			prev->next=curr->next;
			delete curr;
			break;
		}
		prev=curr;
		curr=curr->next;
	}
	return head;
}
