#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    unordered_map<string, int> wordCount;
    int n;

    cout << "How many words? ";
    cin >> n;

    cout << "Enter " << n << " words:\n";

    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;

        // Increase count (auto initializes to 0 if not present)
        wordCount[word]++;
    }

    cout << "\nWord Frequencies:\n";
    for (const auto &pair : wordCount) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    // Searching for a word
    string searchWord;
    cout << "\nEnter word to search: ";
    cin >> searchWord;

    if (wordCount.find(searchWord) != wordCount.end()) {
        cout << searchWord << " appears "
             << wordCount[searchWord] << " times.\n";
    } else {
        cout << searchWord << " not found.\n";
    }

    return 0;
}