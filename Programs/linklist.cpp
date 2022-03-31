#include <bits/stdc++.h>
using namespace std;
struct Node{
    int num;
    Node *ptr;
};


int main (){
    Node *head = NULL;
    Node *last = NULL;
    for(int i = 0;i<5;i++){
        Node *temp = new Node();
        temp->num = i;
        temp->ptr = NULL;
        
        if(head==NULL){
            head = temp;
            last = temp;
        }else{
            last->ptr = temp;
            last = temp;
        }
            
    }

    Node *temp = head;
    cout<<head->num;

    while (temp->ptr!=NULL)
    {
        cout<<temp->num <<" ";
        temp= temp->ptr;
    }
    temp = head;
    while (temp->ptr!=NULL)
    {
        cout<<temp->num <<" ";
        temp= temp->ptr;
    }
    return 0;
}