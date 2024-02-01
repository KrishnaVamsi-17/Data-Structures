/* Structure
class Node{

public:
   Node* next;
   int data;

   Node(int data){
     this->data = data;
     this->next = NULL;
   }


};

*/


bool has_cycle(Node* head) {
map<Node* , bool>mp;
Node* temp=head;
if(head==NULL) return false;
while(temp!=NULL){
    if(mp[temp]== true){
        return true;
    }
    else{
        mp[temp] = true;
    }
    temp=temp->next;
}
return false;

}

//approach2 floyd cycle detection algo
bool floydDetectLoop(Node* head){
  if(head==NULL){
    return false;
  }
  Node* slow = head;
  Node* fast = head;

  while(slow!=NULL && fast!=NULL){
    fast = fast->next;
    if(fast!=NULL){
        fast = fast->next;
    }
    slow = slow->next;

    if(slow==fast) {
        cout<<"Present at:"<<slow->data<<" "<<fast->data<<endl;
        return true;
    }

  }
  return true;
}
