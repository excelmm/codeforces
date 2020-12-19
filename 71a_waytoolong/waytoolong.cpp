#include <iostream>

using namespace std;

int main() {
    int numberOfLines;
    cin >> numberOfLines;
    std::string words[100];
    
    for (int i = 0; i < numberOfLines; ++i) {
        std::string word;
        cin >> word;
        if (word.length() > 10) {
            word = word.substr(0, 1) + std::to_string(word.length() - 2) + word.substr(word.length() - 1, 1);
        }
        words[i] = word;
    }
    
    for (int i = 0; i < numberOfLines; ++i) {
        cout << words[i] << endl;
    }
}