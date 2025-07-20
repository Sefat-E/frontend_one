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
void check_palindrome(Node* &head, Node*tail){
   int flag = 1;
for(Node*i = head,*j = tail; i != j && i->prev != j;i= i->next,j=j->prev){
    if(i->val != j->val){
      flag = 0;
      break;
       
 }
       
 
}
//   flag = 1;

 if( flag == 1){
     cout << "palindrome"<< endl;
     
 }
 else {
     cout << "not palindrome"<< endl;
     
 }

}
// void print_palindrome(head){
//     Node* tmp = head;
//     while(tmp != NULL){
//         cout << tmp->val;
//         tmp = tmp->next;
//     }
//     cout <<endl;
// }

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
  check_palindrome(head,tail);
    return 0;
}