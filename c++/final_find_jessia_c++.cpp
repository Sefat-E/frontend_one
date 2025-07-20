#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin,s);
     string x = "Jessica";
     stringstream ss(s);
     string word;
     while (ss >> word){
       
    if (word == "Jessica" ){
          cout << "YES";
          return 0;
          
    }
     }
      
          cout << "NO";
      
     
    
    
 return 0;
    
}
// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-06/challenges/find-jessica/problem