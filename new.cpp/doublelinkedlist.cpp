#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node* prev;
  Node* next ;  
  Node(int d){
    this -> data = d;
    this -> prev =NULL;
    this -> next = NULL; 
  }
   ~Node(){
    int value = this -> data;
    if(this-> next != NULL){
      delete next;
       next = NULL;
    }
  }
};
  void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
    cout << temp -> data << " ";
    temp = temp -> next;
    }
    cout << endl; 
  }

int Getlength(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len ;
}
void Insertathead(Node* &head,Node* &tail,int data){
    if(head == NULL){
         Node* temp = new Node(data);
          head = temp;
          tail = temp;
    }
  else{  Node* temp = new Node(data);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
  }

}
void Insertattail(Node* &head , Node* &tail,int data){
     if(tail == NULL){
         Node* temp = new Node(data);
          tail = temp;
          head = temp;
    }
  else {  Node* temp = new Node(data);
    tail -> next = temp;
    temp-> prev = tail;
    tail = temp;
  }

}
void insertatposition(Node* &tail,Node* & head,int pos ,int data){
    if(pos == 1){
        Insertathead(head,tail,data);
        return ;
    } 
    Node* temp = head;
    int count  =1;
   while(count < pos-1){
    temp = temp -> next;
    count++;
   }    
   if(temp-> next == NULL){
    Insertattail(head,tail,data);
    return ;
   }

    Node* nodetoinsert = new Node(data);
    nodetoinsert-> next = temp-> next;
    temp-> next -> prev = nodetoinsert;
    temp -> next = nodetoinsert;
    nodetoinsert -> prev = temp; 
}
void Delete(Node* &head, int position){
    if(position == 1){
      Node * temp = head;
      temp -> next-> prev = NULL;
      head = temp -> next;
      temp-> next = NULL;
      delete temp;
    }
    else{

      Node* curr = head;
      Node* prev = NULL;
      int c = 1;
      while( c< position){
        prev = curr;
        curr = curr -> next;
        c++;
      }
      curr -> prev = NULL;
      prev -> next = curr -> next;
      curr-> next = NULL;
      delete curr;
    }
  }

int main(){
   
    Node* head= NULL;
     Node* tail= NULL;
    print(head);
    Insertathead(head,tail,12);
    print(head);
      Insertathead(head,tail,15);
    print(head);
      Insertathead(head,tail,16);
    print(head);
    Insertattail(head,tail, 25);
    print(head);
    insertatposition(tail,head,3,19);
    print(head);
      insertatposition(tail,head,5,23);
    print(head);
      insertatposition(tail,head,7,23);
    print(head);
    Delete(head,1);
    print(head);
    return 0;
}


