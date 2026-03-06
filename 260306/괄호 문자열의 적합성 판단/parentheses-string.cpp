#include <iostream>
#include <string>
#include <stack>

using namespace std;

string str;

int main() {
    cin >> str;
    bool check = true;
    stack<char> s;

    // Please write your code here.
    int len = str.length();
    for (int i = 0; i < len; i++) {
        if (str[i] == '(') s.push(str[i]);
        else {
            if (s.empty()) {
                check = false;
                break;
            }
            s.pop();
        }
    }

    if (!s.empty()) check = false;

    if (check) cout << "Yes";
    else cout << "No";

    return 0;
}
