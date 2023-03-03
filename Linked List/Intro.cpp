#include<bits/stdc++.h>
using namespace std;

// creating the node class
class Node{
    public:
    int data;
    Node* nextNodeAddress;

    // constructor
    Node(int data){
        this -> data = data;
        this -> nextNodeAddress = NULL;
    }


    // destructor
    ~Node(){
        int value = this -> data;
        // this deztructor for memory free
        if( this -> nextNodeAddress != NULL){
            delete nextNodeAddress;
            this -> nextNodeAddress = NULL;
        }
        cout << "Memory free ho raha hai for node with data " << value << endl;
    }
};

// Function of insertion at head 
void insertatHead(Node* &head, int data){
    // new node create
    Node* temp = new Node(data);
    temp -> nextNodeAddress = head;
    head = temp;
}

// function of Insertion at Tail
void insertAtTail(Node* &tail, int data){
    // new node create
    Node* temp = new Node(data);
    tail -> nextNodeAddress = temp;
    tail = tail -> nextNodeAddress;
}

void insertAtIthPosition(Node* &head, int position, int data){
      // case for inserting at 1st position
      if(position == 1){
        insertatHead(head, data);
        return;
      }

    // creating node
    Node* temp = head;
    int count = 1;
    while(count < position-1){
        temp = temp -> nextNodeAddress;
        count++;
    }

    // creating thenew node for data
    Node* nodeToBeInsert = new Node(data);
    nodeToBeInsert -> nextNodeAddress = temp -> nextNodeAddress;
    temp -> nextNodeAddress = nodeToBeInsert;
}


// printing function to linked list
void printLinkedList(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> nextNodeAddress;
    }
    cout << endl;
}


// delete node at position
void deleteNode(int position, Node* &head){
    
    //deleting the first node or Head Node
    if(position == 1){
        Node* temp = head;
        head = head -> nextNodeAddress;
        // memory freeing start node
        temp -> nextNodeAddress = NULL;
        delete temp;
    }
    else{
        // deleting the node at middle or the any position in the linked list 
        Node* curr = head;
        Node* prev = NULL;

        int count = 1;
        while( count < position){
            prev = curr;
            curr = curr -> nextNodeAddress;
            count++;
        }
        prev -> nextNodeAddress = curr -> nextNodeAddress;
        curr -> nextNodeAddress = NULL;
        delete curr;
    }

}

int main(){

    Node* node1 = new Node(10);
    // cout << node1 -> data << endl;
    // cout << node1 -> nextNodeAddress << endl;

    Node* head = node1;
    Node* tail = node1;
    printLinkedList(head);

    insertatHead(head, 12);
    printLinkedList(head);

    insertatHead(head, 15);
    printLinkedList(head);

    insertAtTail(tail, 17);
    printLinkedList(head);

    insertAtIthPosition(head, 3, 22);
    printLinkedList(head);

    insertAtIthPosition(head, 1, 25);
    printLinkedList(head);

    deleteNode(6, head);
    printLinkedList(head);


    return 0;
}