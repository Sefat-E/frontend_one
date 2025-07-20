#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >>t;
    while(t--){
      string s,x;
    cin >> s >> x;
    
    while(1){
    int pos = s.find(x);
    if (pos != -1){
    s.erase(pos,x.size());
    s.insert(s.begin() + pos,'#');
    }
    else 
    {
        break; 
            }
    }
     cout << s << endl;     
     
    }  
    
 return 0;
    
}
// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-06/challenges/replace-word
   
  
