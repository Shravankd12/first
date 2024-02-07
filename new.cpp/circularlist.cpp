#include<iostream>
using namespace std;

class Node{
 public:
 int data;
 Node* next;
 Node(int d){
    this-> data = d;
    this -> next = NULL;
 }
 ~Node(){
    int value = this -> data;
    if(this->next != NULL){
        delete next;
        next = NULL; 
    }
 }

};
void Insertnode(Node* &tail, int element , int d){
   if(tail == NULL){
      Node* Newnode = new Node(d);
        tail = Newnode;
        Newnode -> next = Newnode; 
   }
   else{
   Node* curr = tail ;

   while(curr-> data != element){
      curr = curr -> next;
   } 
   Node* temp = new Node(d);
    temp -> next = curr -> next;
    curr -> next = temp;

   }
}
void print(Node* tail){
   if(tail == NULL){
      cout <<"its alrrady empty" << endl;
      return ;
   }
  Node* temp = tail;
  do{
   cout << tail -> data << " ";
   tail = tail -> next;
  } while(tail != temp);
  cout << endl;
}
void Delete(Node* &tail, int value ){
   if(tail == NULL){
      cout <<"its alrrady empty" << endl;
      return ;
   }
   else{
      Node* prev = tail;
      Node* curr= prev -> next;
      while(curr -> data != value){
         prev = curr;
         curr= curr -> next;
      }
      prev -> next = curr-> next;
      if(curr== prev){
          tail = NULL;
      }
       else if(tail == curr){
         tail = prev;
      }
      curr-> next = NULL;
      delete curr;
   }
}
 
int main(){
   Node* tail = NULL;
   Insertnode(tail,5,3);
   print(tail);
     Insertnode(tail,3,5);
   print(tail);

     Insertnode(tail,5,7);
   print(tail);
     Insertnode(tail,7,9);
   print(tail);
     Insertnode(tail,5,9);
   print(tail);
    Delete(tail,3);
    print(tail);

   return 0 ; 
}
