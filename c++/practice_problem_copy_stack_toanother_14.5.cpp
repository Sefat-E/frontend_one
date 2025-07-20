int main() {
   stack<int> st1;
   int n;
   cin >> n;
   for (int i = 0; i<n; i++){
       int x;
       cin >> x;
       st1.push(x);
   }
   stack <int> st2;
   while(!st1.empty()){
      int val = st1.top(); 
       st2.push(val);
       st1.pop();
   }
   while(!st2.empty()){
      cout << st2.top() << " ";
      st2.pop();
   }
//    Take a stack of size N as input and copy those elements to another stack to get the values in the order they were inserted and print them. You should use STL to solve this problem.


// Sample Input
// Sample Output
// 5
// 10 20 30 40 50
// 10 20 30 40 50

