
#include<bits/stdc++.h>
using namespace std;


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


void InsertatHead(Node* &head, int d){

Node* temp = new Node(d);
if(head==NULL){
    head = temp;
}
else{
    temp->next=head;
    head = temp;
}


}



Node* reverseinGroup(Node* &head, int k){

    if(head==NULL){
         return NULL;
    }

    Node* next = NULL;
    Node* prev = NULL;
    Node* curr = head;
    int count=0;

    while(curr!=NULL && count<k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if(next!=NULL)
    head->next = reverseinGroup(next,k);


    return prev;




}




void print(Node* &head){
Node* temp = head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}
cout<<endl;

}






int main(){
 Node* head = NULL;
 InsertatHead(head,8);
 InsertatHead(head,9);
 InsertatHead(head,10);
 InsertatHead(head,11);
 InsertatHead(head,12);
 print(head);

head = reverseinGroup(head,2);
 print(head);

}
