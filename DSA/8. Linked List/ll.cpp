#include <iostream>
struct Node {
    int data;
    Node* next;
};

Node* addAtHead(int data, Node* head) {
    // this function adds a new node in the LL, and returns the new head
    if(head == NULL) {
        Node* new_node = new Node;
        new_node->data = data;
        head = new_node;
        return head;
    }
    Node* new_node = new Node;
    new_node->data = data;
    new_node->next = head; // make the new_node's next pointer point to the head and 
    head = new_node; // then update the head
    return head;
}

Node* removeAtHead(Node* head) {
    if(head == NULL) return NULL;
    Node* new_head = head->next;
    Node* old_head = head;
    head->next = NULL;
    head = new_head;
    delete old_head;
    return head;
}

Node* addAtTail(int data, Node*head) {
    if(head == NULL) {
        return addAtHead(data, head);
    }
    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    Node* new_node = new Node;
    new_node->data = data;
    new_node->next = NULL;
    temp->next = new_node;
    return head;
}

Node* removeAtTail(Node* head) {
    if(head == NULL) return NULL;
    if(head->next == NULL) { // single node case
        delete head;
        return NULL;
    }
    Node* temp = head;
    while(temp->next->next != NULL) {
        temp = temp->next;
    }
    Node* tail = temp->next;
    temp->next = NULL;
    delete tail;
    return head;
}

void display(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        std::cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    std::cout<<"X \n";
}

int main() {
    Node* head = NULL;
    head = addAtHead(10, head);
    head = addAtHead(20, head);
    head = addAtHead(30, head);
    display(head);
    head = addAtTail(40, head);
    display(head);
     head = addAtTail(100, head);
    display(head);
    head = removeAtTail(head);
    display(head);
    return 0;
}