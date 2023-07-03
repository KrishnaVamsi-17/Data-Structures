#include<bits/stdc++.h>
using namespace std;

class Node{

  public:
      int data;
      Node *next;
    //Constructor
      Node(int data){

          this -> data = data;
          this -> next = NULL;
    }
      ~Node(){
          int value = this->data;
          if(this->next!=NULL){
            delete next;
            this->next = NULL;
          }
          cout<<"Memory is free for node with data= "<<value<<endl;
      }

};
void InsertAtHead(Node* &head,int d){
    //new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;


}
void InsertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;

}
void InsertAtAnyPos(int pos,Node* &head,Node* &tail,int d){

    if(pos==1)
    {
        InsertAtHead(head,d);
        return;
    }


    Node* temp = head;
    int cnt=1;
    while(cnt<pos-1)
    {
        temp = temp->next;
        cnt++;
    }
    //inserting at last position
    if(temp->next==NULL){
        InsertAtTail(tail,d);
        return;
    }
    Node* node1 = new Node(d);
    node1->next = temp->next;
    temp -> next =  node1;



}
void deleteNode(int pos,Node* &head,Node* &tail){
    //deleting first or starting node
    if(pos==1)
    {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        //deleting node at any position
        Node*curr = head;
        Node* prev = NULL;
        int cnt=1;
        while(cnt< pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        if(curr->next==NULL)
        {
            tail = prev;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }



}
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main()
{
    //created a new node
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;
    print(head);
    InsertAtTail(tail,20);
    print(head);
    InsertAtTail(tail,30);
    print(head);
    InsertAtAnyPos(4,head,tail,22);
    print(head);

    cout<<"head="<< head->data<<endl;
    cout<<"Tail="<<tail->data<<endl;
    deleteNode(4,head,tail);
    print(head);
     cout<<"head="<< head->data<<endl;
    cout<<"Tail="<<tail->data<<endl;
}
