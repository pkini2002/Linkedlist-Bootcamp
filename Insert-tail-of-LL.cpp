Node* insertEnd(Node* head, int k) {
    // Write your code here.
    Node* temp=new Node(k);
    temp->next=nullptr;
    if(head==NULL){
        head=temp;
        return head;
    }
    else{
    Node* curr=head;
    while (curr->next != NULL) {
      curr = curr->next;
    }
    curr->next = temp;
    return head;
    }
}
