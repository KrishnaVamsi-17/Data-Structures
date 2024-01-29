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
