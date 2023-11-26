Node* constructLL(vector<int>& arr) {
    // Write your code here
    Node* head=new Node(arr[0]);
    Node* curr=head;

    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        curr->next=temp;
        curr=temp;
    }
    return head;
}
