#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    // Convert the string to lowercase
    for (int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }

    // Count occurrences of each required letter
    int countE = 0, countG = 0, countY = 0, countP = 0, countT = 0;

    for (char c : s) {
        if (c == 'e') countE++;
        else if (c == 'g') countG++;
        else if (c == 'y') countY++;
        else if (c == 'p') countP++;
        else if (c == 't') countT++;
    }

    // Find the minimum count among all characters
    int result = min({countE, countG, countY, countP, countT});

    cout << result << endl;
    return 0;
}
