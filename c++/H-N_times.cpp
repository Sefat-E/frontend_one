#include <bits/stdc++.h>
using namespace std;
void printCharacter(int t,char a) {
    for (int i = 0; i <t-1; i++){
        cout << a << " ";
    }
    cout << a;
    cout << endl;
} 

int main() {
    int T; 
    cin >> T;

    while (T--) {
    int n;
    char c ;
    cin >> n >> c;
    printCharacter(n,c);
    }
    return 0;
}
// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/H