#include<bits/stdc++.h>
using namespace std;
// class mystack
// {
//   public:
//     vector<int>v;
//       void push(int val)
//       {
//       v.push_back(val);
//       }
//       void pop()
//       {
//       v.pop_back();
//       }
//       int top()
//      {
//       return v.back();
//       }
//      int size()
//      {
//       return v.size();
//       }
//       bool empty()
//       {
//       return v.empty();
//       }
     
// };

int main() {
   stack<int> st1;
   int n;
   cin >> n;
   for (int i = 0; i<n; i++){
       int x;
       cin >> x;
       st1.push(x);
   }
   queue <int> q;
   int m;
   cin >> m;
   for (int i = 0; i<m; i++){
       int x;
       cin >> x;
       q.push(x);
   }
   if(st1.size() != q.size()){
           cout << "NO";
           return 0;
       }
   else {
       while(!st1.empty() && !q.empty()){
       
      
           if(st1.top() != q.front()){
               cout << " NO";
               return 0;
           }
           
       
           st1.pop();
           q.pop();
       }
       cout << "YES";
   }
  
    return 0;
}
// Question: Take a stack of size N and a queue of size M as input. Then check if both of them are the same or not in the order of removing. You should use STL to solve this problem.

// Sample Input
// Sample Output
// 5
// 10 20 30 40 50
// 5
// 10 20 30 40 50
// NO
// 5
// 10 20 30 40 50
// 4
// 10 20 30 40
// NO
// 5
// 10 20 30 40 50
// 5
// 50 40 30 20 10
// YES






