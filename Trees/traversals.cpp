
#include<bits/stdc++.h>
using namespace std;

class node{
 public:
   int data;
   node* right;
   node* left;

   node(int data){
     this->data = data;
     this->left = NULL;
     this->right = NULL;
   }
};

node* buildTree(node* root){
  cout<<"Enter the data:"<<endl;
  int data;
  cin>>data;
  root = new node(data);
  if(data==-1) return NULL;
  cout<<"Enter the data for the left of: "<<data<<endl;
  root->left = buildTree(root->left);
  cout<<"Enter the data for the right of: "<<data<<endl;
  root->right = buildTree(root->right);
}


//LEVELORDER TRAVERSAL
void levelOrderTraversal(node* root){
  queue<node*>q;
  q.push(root);
  q.push(NULL);
  while(!q.empty()){
   node* temp = q.front();
   q.pop();

    if(temp==NULL){
       cout<<endl;

       if(!q.empty()){
          q.push(NULL);
       }
    }
    else{
      cout<<temp->data<<" ";
          if(temp->left){
          q.push(temp->left);
        }

        if(temp->right){
          q.push(temp->right);
        }

     }

   }

}
//INORDER TRAVERSAL
void inOrder(node* root){ //LNR
   if(root==NULL) return;

   inOrder(root->left);
   cout<<root->data<<" ";
   inOrder(root->right);

}

//PREORDER TRAVERSAL
void preOrder(node* root){//NLR
    if(root==NULL) return;

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

//POSTORDER TRAVERSAL
void postOrder(node* root){//LRN
   if(root==NULL) return;

   postOrder(root->left);
   postOrder(root->right);
   cout<<root->data<<" ";
}



int main(){
 node* root = NULL;
  root = buildTree(root);
  levelOrderTraversal(root);
  inOrder(root);
  cout<<endl;
  cout<<"PreOrder Traversal : ";
  preOrder(root);
  cout<<endl;
  cout<<"PostOrder Traversal :";
  postOrder(root);
  cout<<endl;
}
