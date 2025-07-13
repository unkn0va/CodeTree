#include <iostream>
#include <string>

using namespace std;

string text;
string pattern;

int sequence(string text, string pattern) {
    int len1 = text.length(), len2 = pattern.length();
    bool right = true;
    for (int i = 0; i < len1 - len2 + 1; i++) {
        right = true;
        for (int j = 0; j < len2; j++) {
            if (text[i+j] != pattern[j]) {
                right = false;
                break;
            }
        }
        if (right == true) return i;
    }
    return -1;
}

int main() {
    cin >> text;
    cin >> pattern;

    // Please write your code here.
    cout << sequence(text, pattern);
    return 0;
}