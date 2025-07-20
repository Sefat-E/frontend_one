// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
class Node{
    public :
    int val;
    Node* next;
    Node* prev;
 Node(int val)
 {
    this->val = val;
    this->next = NULL;
    this->prev = NULL;
 }
};
void insert_value(Node* &head,Node* &tail,int val)
{
    Node* newnode = new Node(val);
    if (head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

void sort_linked_list(Node* &head){
   for(Node*i = head; i->next != NULL; i= i->next){
       for(Node *j = i->next;j->next != NULL; j= j->next){
    if(i->val >j->val){
        swap(i->val,j->val);
    }
}
}
}

void print_List(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        
        cout << tmp->val<<endl;
        tmp = tmp->next;
    }
    cout <<endl;
}

int main() {
   Node* head = NULL;
   Node* tail = NULL;
   
   int val;
   while(true){
       cin >> val;
       if( val == -1){
           break;
       }
       insert_value(head,tail,val);
   }
 sort_linked_list(head);
 print_List(head);
    return 0;
}