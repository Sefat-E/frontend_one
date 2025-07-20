#include<bits/stdc++.h>
using namespace std;
int main() {
   queue<int> q;
   int n;
   cin >> n;
   for (int i = 0; i<n; i++){
       int x;
       cin >> x;
       q.push(x);
   }
   stack <int> st2;
   while(!q.empty()){
      int val = q.front(); 
       st2.push(val);
       q.pop();
   }
   while(!st2.empty()){
      cout << st2.top() << " ";
      st2.pop();
   }

//    Question: Take a queue of size N as input. You need to copy those elements in another queue in reverse order. You might use stack here. You should use STL to solve this problem. After copying in another queue, print the elements of that queue.

// Sample Input
// Sample Output
// 5
// 10 20 30 40 50
// 50 40 30 20 10

