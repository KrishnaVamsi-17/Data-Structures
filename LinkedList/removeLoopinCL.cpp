/*
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

//remove Loop in a circular linkedlist
void removeLoop(Node* head){
 if(head==NULL) return;

 Node* start = getStartingNode(head);
 Node* temp = start;

 while(temp->next!= start){
    temp=temp->next;
 }
 temp->next = NULL;

}


