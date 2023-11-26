int searchInLinkedList(Node<int> *head, int k) {
    // Write your code here.
    Node<int> *curr=head;
    while(curr!=NULL){
        if(curr->data==k){
            return 1;
        }
        curr=curr->next;
    }
    return 0;
}
