#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
     int val;
     Node* next;
    Node(int val){
        this-> val= val;
        this->next = NULL;
    } 
};
void insert_value(Node* &head,Node* &tail,int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
   tail->next = newnode;
   tail = newnode;
}
void print_linked_list(Node* head)
{
    Node* tmp = head;
    int count = 0;
    while(tmp != NULL)
    {
        count++;
       
        tmp = tmp->next;
         
    }
    cout << count <<endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while(true){
        cin >> val;
        if(val == -1){
            break;
        }
        insert_value(head,tail,val);
    }
    print_linked_list(head);

    return 0;
}
// https://docs.google.com/document/d/1KJAVqqr7pqeMR0z5ATAXmKbIQo2JazHf/edit