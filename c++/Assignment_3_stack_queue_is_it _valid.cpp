#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
   stack<char> st1;
   string a;
   cin >> a;
   stack<char> st2;
   for(char c: a){
       st1.push(c);
   }
   while(!st1.empty()) {
      char val = st1.top();
      st1.pop();
        
          if((!st2.empty()) && ((val=='0'&& st2.top() =='1' )|| (val =='1'&& st2.top() =='0' ))){
             
              st2.pop();
         
          }
        
         else{
              st2.push(val);
           
          }
         
       
    }
   if(st2.empty()){
       cout<< "YES"<<endl;
   }
   else {
       cout<< "NO"<<endl;
   }

     
    }
    return 0;
}
// https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-06/challenges/is-it-valid-1-1
// #include <iostream>
// #include <stack>
// #include <string>
// using namespace std;

// bool isValidBinaryString(const string& s) {
//     stack<char> st;

//     for (char c : s) {
//         // Check if the current character cancels the top of the stack
//         if (!st.empty() && ((c == '0' && st.top() == '1') || (c == '1' && st.top() == '0'))) {
//             st.pop(); // Cancel the characters
//         } else {
//             st.push(c); // Otherwise, push the current character
//         }
//     }

//     // If the stack is empty, the string is valid
//     return st.empty();
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         string input;
//         cin >> input;

//         if (isValidBinaryString(input)) {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }
