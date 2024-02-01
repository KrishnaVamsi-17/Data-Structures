/*
Node structure
class Node {
    public:
    int data;
    Node* next;

    //constrcutor
    Node(int d) {
        this->data = d;
        this->next = NULL;
    }

    ~Node() {
        int value = this->data;
        if(this->next != NULL) {
            delete next;
            next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }

};
*/







//Get starting node of a loop in a circular Linkedlist
Node* getStartingNode(Node* head){
   if(head==NULL){
    return NULL;
   }

  Node* intersection = floydDetectLoop(head);
  Node* slow = head;
  while(slow!=intersection){
    slow=slow->next;
    intersection = intersection->next;

  }
  return slow;

}
