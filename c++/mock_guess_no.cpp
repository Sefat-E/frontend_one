// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

long long int input;

bool fun(long long int n)
{
    if(n>input) return false;

    if(n==input) return true;

    bool t1 = fun(n*10);
    bool t2 = fun(n*20);
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  // Input the target sum

    // Try adding 3 or 4 in each step, and check if we can reach T
    for (int i = 0; i <= T / 3; i++) {
        for (int j = 0; j <= T / 4; j++) {
            if (i * 3 + j * 4 == T) {  // Check if we can reach the target
                cout << "YES\n";
                return 0;
            }
        }
    }

    // If no combination is found
    cout << "NO\n";
    return 0;
}

    return t1 || t2;
    
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        cin>>input;
        if(fun(1)) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
    return 0;
}

// https://www.hackerrank.com/contests/phitron-problem-solvers-club-mock-contest/challenges/love-sum