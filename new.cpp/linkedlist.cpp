#include<iostream>
using namespace std;
 class Node {
  public:
  int data;
  Node* next;

  Node(int data){  
    this->data = data;
    this->next = NULL;
  }
  ~Node(){
    int value = this -> data;
    if(this-> next != NULL){
       delete next;
       this  -> next = NULL;
    }
  }
};
 void insertAtHead(Node* &head,int d ){
     Node* temp = new Node(d);
     temp -> next = head;
     head = temp;
   }
    void insertAttail(Node* &tail,int d ){
     Node* temp = new Node(d);
       tail-> next = temp;
       tail = temp ;
       }
     void print(Node* &head){
      Node* temp = head;
      while(temp != 0 ){
        cout << temp -> data << " ";
        temp = temp -> next; 
      }
    cout << endl;
}
void Insertatmiddle(Node* &tail,Node* &head,int pos,int d){
  if(pos == 1){
    insertAtHead(head,d);
    return ;
  }
 
  Node* temp = head;
   int count  = 1;
  while(count < pos - 1){
    temp = temp -> next;
    count++;
  }
  if(temp -> next= NULL){
    insertAttail(tail,d);
    return ;
  }
  Node* nodetoinsert = new Node(d);
  nodetoinsert-> next = temp -> next;
  temp -> next = nodetoinsert; 

}
  void Delete(Node* &head, int position){
    if(position == 1){
      Node * temp = head;
      head = head -> next;
      temp-> next = NULL;
      delete temp;
    }
    else{

      Node* curr = head;
      Node* prev = NULL;
      int c = 1;
      while( c < position){
        prev = curr;
        curr = curr -> next;
        c++;
      }
      prev -> next = curr -> next;
      curr-> next = NULL;
      delete curr;
    }
  }


int main(){
 Node* node1 = new Node(11);

 Node* head = node1;
 Node* tail = node1;
 print(tail);
 insertAttail(tail,12);  
  print(tail);
   insertAtHead(head,12);
  print(head);
  Insertatmiddle(tail,head,3,212);
  print(head);
  Delete(head,1);
  print(head);
 return 0 ;
}