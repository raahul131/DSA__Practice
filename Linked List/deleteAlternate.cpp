// Q. Given the head of a linkedlist, delete every alternate element from yhe lsit starting from the second element

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

    // comstructor
    LinkedList(){
        head = NULL;
    }

    void insertatTail(int val){

        Node* new_node = new Node(val);
        if(head == NULL){
            // linkedlist is empty
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
        while(temp != NULL){
            cout << temp -> val << "->";
            temp = temp -> next;
        }
        cout << "NULL" << endl;
    }
};


void deleteAlternateNodes(Node* &head){

    Node* current_node = head;
    while(current_node != NULL && current_node -> next != NULL){
        Node* temp = current_node -> next;
        current_node -> next = current_node -> next -> next;
        free(temp);
        current_node = current_node -> next;
    }
}

int main(){

    LinkedList ll;
    ll.insertatTail(1);
    ll.insertatTail(2);
    ll.insertatTail(3);
    ll.insertatTail(4);
    ll.insertatTail(5);
    ll.insertatTail(6);
    ll.display();

    deleteAlternateNodes(ll.head);
    ll.display();

  

    return 0;
}