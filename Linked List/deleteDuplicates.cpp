#include<bits/stdc++.h>
using namespace std;

class Node{
    public:

    int val;
    Node* next;


    // constructor
    Node(int data){
        val = data;
        next = NULL;
    }
};

class LinkedList{

    public:
    Node* head;

    // constructor
    LinkedList(){
        head = NULL;
    }

    void insertAtTail(int val){

        Node* new_node = new Node(val);
        if(head == NULL){
            head = new_node;
            return;
        }

        Node* temp = head;
        while(temp -> next != NULL){
            temp = temp -> next;
        }

        temp -> next = new_node;
    }

    void display(){
        Node* temp = head;
        while(temp -> next != NULL){
            cout << temp -> val << "->";
            temp = temp -> next;
        }
        cout << "NULL" << endl;

    }
};


void deleteDuplicates(Node* &head){
    
    Node* current_node = head;
    while(current_node != NULL){
        while(current_node -> next != NULL && current_node -> val == current_node -> next -> val){
            // deleting the current node next 
            Node* temp = current_node -> next;
            current_node -> next = current_node -> next -> next;
            free(temp);
        }
        current_node = current_node -> next;
    }
}



int main(){

    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(3);
    ll.insertAtTail(3);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.display();

    deleteDuplicates(ll.head);
    ll.display();
    return 0;
}