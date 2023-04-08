#include <iostream>
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


class Solution {
public:
    Node* createNode(int data) {
        Node* new_node = new Node(data);
        // new_node->data = data;
        // new_node->next = NULL;
        return new_node;
    }
    
    Node* copyRandomList(Node* head) {
        if(head == NULL) return NULL;
        Node* temp = head;
        Node* nexttemp = NULL;
        while(temp != NULL) {
            Node* new_node = createNode(temp->val);
            nexttemp = temp->next;
            temp->next = new_node;
            new_node->next = nexttemp;
            temp = nexttemp;
        }
        temp = head;
        while(temp != NULL) {
            if(temp->random == NULL) {
                temp->next->random = NULL;
            } else {
                temp->next->random = temp->random->next;
            }
            temp = temp->next->next;
        }
        
        temp = head;
        Node* new_head = temp->next;
        Node* newtemp = temp->next;
        while(temp != NULL) {
            temp->next = newtemp->next;
            if(newtemp->next != NULL) {
                newtemp->next = newtemp->next->next;
                
            }
            temp = temp->next;
            newtemp = newtemp->next;
        }
        return new_head;
    }
};