/* Structure Of Node
class Node{
public:
    int data;
    Node* next;
    //Constructor
    Node(int data){
      this->data = data;
      this->next = NULL;

    }

};
*/

bool isCircular(Node* head){
    if(head->next==NULL) return false;
    if(head==NULL){
        return true;
    }
    Node*temp = head->next;

    while(temp!=NULL && temp!=head){
        temp=temp->next;
    }
    if(temp==head) return true;
    if(temp==NULL) return false;
}
