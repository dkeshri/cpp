#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
};

int main (){
    Node* head = new Node();
    head->data = 10;    
    head->next = new Node();
    head->next->data = 20;
    head->next->next = NULL;
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    return 0;
}