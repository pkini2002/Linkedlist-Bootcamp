Node * deleteHead(Node *head) {
    // Write your code here.
    Node *curr=head;
    head=head->next;
    delete curr;
    return head;
}
