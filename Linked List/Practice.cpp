#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node* next;

    // constructor
    Node(int data){
        value = data;
        next = NULL;
    }
};

// Insert at head
void insertAtHead(Node* &head, int val){
    Node* new_node = new Node(val);
    new_node -> next = head;
    head = new_node;
}

// Insert at tail
void insertAtTail(Node* &head, int val){
    Node* new_node = new Node(val);

    Node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }

    // temp has reached at last node;
    temp -> next = new_node;
}

// Insert at Kth Position
void insertAtkPosition(Node* &head, int val, int position){

    if(position == 0){
        insertAtHead(head, val);
        return;
    }

    Node* new_node = new Node(val);

    Node* temp = head;
    int current_position = 0;
    while( current_position != position - 1){
        temp = temp -> next;
        current_position++;
    }
    // temp is pointing to node at position-1
    new_node -> next = temp -> next;
    temp -> next = new_node;
}

// Deleting the node at Head
void deleteNodeAtHead(Node* &head){
    Node* temp = head;
    head = head -> next;
    free(temp);
}

// deleting node from the tail
void deleteAtTail(Node* &head){

    Node* second_last = head;
    while(second_last -> next -> next != NULL){
        second_last = second_last -> next;
    }

    Node* temp = second_last -> next;
    second_last -> next = NULL;
    free(temp);
}


// delete at position
void deleteAtPosition(Node* & head, int position){

    if(position == 0){
        deleteNodeAtHead(head);
    }

    Node* prev = head;
    int current_Position = 0;
    while(current_Position != position-1){
        prev = prev -> next;
        current_Position++;
    }

    Node* temp = prev -> next; // node to be deleted
    prev -> next = prev -> next -> next;

    free(temp);
}

void display(Node* head){

    Node* temp = head;
    while(temp != NULL){
        cout << temp -> value << " -> ";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}



int main(){

    // Node* n = new Node(1);
    // cout <<  n-> value << " " << n -> next << endl;


    Node* head = NULL;
    insertAtHead(head, 1);
    display(head);

    insertAtHead(head, 2);
    display(head);


    insertAtTail(head, 3);
    display(head);


    insertAtkPosition(head, 4, 2);
    display(head);

    deleteNodeAtHead(head);
    display(head);

    // deleteAtTail(head);
    // display(head);

    deleteAtPosition(head, 1);
    display(head);

    return 0;
}