#include <bits/stdc++.h>
using namespace std;

const vector<string> KEYS = {"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};

void generateWords(string digits, int pos, string word, vector<string>& result) {
    if (pos == digits.length()) {
        result.push_back(word);
        return;
    }

    int digit = digits[pos] - '0';
    string value=KEYS[digit];
    for (int i = 0; i < value.length(); i++) {
        word.push_back(value[i]);
        generateWords(digits,pos+1,word,result);
        word.pop_back();
    }
}

vector<string> letterCombinations(string digits) {
    vector<string> result;
    if (digits.empty()) {
        return result;
    }

    generateWords(digits, 0, "", result);
    return result;
}

int main() {
    vector<string> result = letterCombinations("34");
    for (auto word : result) {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}