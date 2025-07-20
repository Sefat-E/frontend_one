#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    cin.ignore();
    
    while(t--){
    string S;
    getline(cin, S);
    stringstream ss(S);
    string word;
    map<string, int> count;
    int max_count = 0;
    string max_word;
    while (ss >> word) {
        count[word]++;
         if (count[word] > max_count) {
            max_count = count[word];
            max_word = word;
        }
        
    }

    
    cout <<  max_word <<" "<<  max_count<< endl;
    }
    return 0;
}
// https://www.hackerrank.com/contests/final-exam-a-basic-data-structure-a-batch-06/challenges/count-me-2/submissions/code/1387900098