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
void print_middle_value(Node* head)
{
    Node* tmp = head;
    int count = 0;
    while(tmp != NULL)
    {
        count++;
       
        tmp = tmp->next;
         
    }
    tmp = head;
     int index = (count/2);
        for (int i = 1; i<index; i++){
            tmp = tmp->next;
        }
    if(count % 2 != 0){
        cout << tmp->next->val <<endl;
       }
       else{
           cout << tmp->val<<" "<<tmp->next->val<<endl;
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
   print_middle_value(head);

    return 0;
}
