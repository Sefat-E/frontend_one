#include <bits/stdc++.h>
using namespace std;

void current_min(priority_queue<int, vector<int>, greater<int>>& min_current) {
    if (min_current.empty()) {
        cout << "Empty" << endl;
        return;
    }
    int min_value = min_current.top();
    cout << min_value << endl;
}

int main() {
    priority_queue<int, vector<int>, greater<int>> min_current;
    int n;
    cin >> n;

    
    for (int i = 0; i < n; i++) {
        
        int value;
        cin >> value;
        
        min_current.push(value);
    }

    int t;
    cin >> t;
    while(t--){
   
        
        int x;
        cin >> x;

        if (x == 0) {
           
           
            int value;
            cin >> value;
            min_current.push(value);
            current_min(min_current);
        } 
        else if (x == 1) {
            
             current_min(min_current);
        }
        else if (x == 2) {
           
              if (!min_current.empty()){
                min_current.pop();
              }
             current_min(min_current);        
            }
        
    
}
    return 0;
}

// https://www.hackerrank.com/contests/final-exam-a-basic-data-structure-a-batch-06/challenges/give-max-min/submissions/code/1387769419