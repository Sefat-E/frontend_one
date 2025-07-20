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
void insert_given_query(Node* &head,Node* &tail,int index,int qval)
{    Node* tmp = head;
     
     if (index == 0) {
        Node* newnode = new Node(qval);
        newnode->next = head;
        head = newnode;
        return;
     }
     int length = 0;
    // Node* tmp = head;
    while (tmp != NULL) {
        length++;
        tmp = tmp->next;
    }
    if (index > length) {
        cout << "Error: Index out of bounds.\n";
        return;
    }

    // any position;
     for (int i =1; i<index; i++){
         tmp = tmp->next;
     }
     Node *newnode = new Node(qval);
     newnode->next = tmp->next;
     tmp->next = newnode;  
     if(newnode->next==NULL){
         tail = newnode;
     }
}

void print_new_value(Node* head)
{
    Node* tmp = head;
    
    while(tmp != NULL)
    {
       cout << tmp->val << " ";
       tmp = tmp->next;
        
    }
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
    int index;
    int qval;
     cin >> index >>qval;
    insert_given_query(head,tail,index,qval);
   print_new_value(head);

    return 0;
}
