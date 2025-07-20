#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// Function to insert a value into the linked list
void insert_value(Node*& head, Node*& tail, int val) {
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

// Function to find the maximum value in the linked list
int find_max(Node* head) {
    int max_val = INT_MIN;
    Node* tmp = head;
    while (tmp != NULL) {
        max_val = max(max_val, tmp->val);
        tmp = tmp->next;
    }
    return max_val;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int val;

    // Input for the linked list
    while (true) {
        cin >> val;
        if (val == -1) break; // End of the list
        insert_value(head, tail, val);
    }

    // Find and print the maximum value
    cout << find_max(head) << endl;

    return 0;
}
// https://docs.google.com/document/d/1EXLsPmtlVXNjdqk49BCcLbPHf0n4UBlP/edit