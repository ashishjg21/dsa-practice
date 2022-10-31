#include <cstddef>
#include<iostream>

using namespace std;

class Node{
  public:
    int data;
    Node* next;
  
  //constructor

  Node(int data){
    this -> data = data;
    this -> next = NULL;
  }
  
  ~Node(){
    int value = this -> data;
    
    if (this -> next != NULL) {
      delete next;
      this -> next = NULL;

    }
    cout << "memeory is free for node with data"<< value << endl;

  }
};

void insertAtHead(Node* &head, int d){
  //creatin gnew node 
  Node* temp = new Node(d);
  temp->next = head;
  head = temp;

}

void insertAtTail(Node* &tail, int d){
  //creatin new node 
  Node* temp = new Node(d);
  tail-> next = temp;
  tail = temp;
}

void print(Node* &head){
  if(head == NULL){
    cout << "List is empty" << endl;
    return;
  }
  Node* temp = head;

  while(temp != NULL){
    cout << temp-> data << " ";
    temp = temp->next;

  }
  cout << endl;
}

int main(){
  
  Node* node1 = new Node(10);
  Node* head = node1;
  insertAtHead(head, 10);
  return 0;
}
