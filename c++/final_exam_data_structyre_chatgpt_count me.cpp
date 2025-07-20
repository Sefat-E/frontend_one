#include <iostream>
#include <sstream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    string S;
    cout << "Enter the sentence: ";
    getline(cin, S);

    unordered_map<string, int> wordCount;
    stringstream ss(S);
    string word;

    // Count the occurrences of each word
    while (ss >> word) {
        wordCount[word]++;
    }

    string mostFrequentWord;
    int maxCount = 0;

    // Find the most frequent word using an iterator
    for (auto it = wordCount.begin(); it != wordCount.end(); it++) {
        if (it->second > maxCount) {
            mostFrequentWord = it->first;
            maxCount = it->second;
        }
    }

    cout << "Most frequent word: " << mostFrequentWord << endl;
    cout << "Count: " << maxCount << endl;

    return 0;
}
