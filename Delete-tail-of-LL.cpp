Node *deleteLast(Node *list){
    // Write your code here
    Node *curr=list;
    Node *prev=nullptr;
    while(curr->next!=NULL){
        prev=curr;
        curr=curr->next;
    }
    prev->next=nullptr;
    delete curr;
    return list;
}
