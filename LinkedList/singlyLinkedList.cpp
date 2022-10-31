// filename.cpp: Ashish Galagali
// Description: implementing singly linked list

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
};

void insertAtHead(Node* &head, int d){
    //create new node
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){

    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d){

    //insert at start 
    if(position == 1){
        insertAtHead(head,1);
    }

    Node* temp = head;
    int cnt = 1;
    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }
    //inserting at last position 

    if(temp -> next == NULL){
        insertAtTail(tail,d);
        return;
    }

    //creating a node for d 

    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;
}

void print(Node* &head){

    if(head == NULL){
        cout << "List is empty " << endl;
        return;
    }
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next; 
    }
    cout << endl;
}


void deleteNode(int position, Node* & head) { 

    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        head = head -> next;
        //memory free start ndoe
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next  = NULL;
        delete curr;

    }
}

int main()
{
    Node* node1 = new Node(10);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    Node* head = node1;
    print(head);

    insertAtHead(head, 12);
    print(head);


    Node* tail = node1;


    insertAtTail(tail, 14);
    print(head);
    
    insertAtTail(tail, 15);
    print(head);

    insertAtPosition(tail,head, 4, 22);
    //print(head);    

    
    return 0;
}
