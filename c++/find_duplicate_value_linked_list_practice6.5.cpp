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
void print_duplicate_value(Node* head)
{
    Node* tmp = head;
    int f[101] ={0};
    while(tmp != NULL)
    {
       f[tmp->val] ++;
       tmp = tmp->next;
      
    }
     
    for(int i =0; i<101;i++){
      if(f[i]>1){
         cout << " YES" <<endl;
         return;
    }
    
    }
    cout << " NO" <<endl;
    
        
     
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
    print_duplicate_value(head);

    return 0;
}