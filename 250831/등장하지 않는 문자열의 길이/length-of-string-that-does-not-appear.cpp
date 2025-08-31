#include <iostream>
#include <string>

using namespace std;

int N, cnt;
string str;

bool check(string s, int len) {
    for (int i = 0; i <= N-len; i++) {
        string cur = s.substr(i, len);
        cnt = 0;

        for (int j = i+1; j <= N-len; j++) {
            if (s.substr(j, len) == cur) {
                cnt++;
            }
        }

        if (cnt >= 1) return false;
    }

    return true;
}

int main() {
    cin >> N;
    cin >> str;

    // Please write your code here.
    for (int i = 1; i <= N; i++) {
        if (check(str, i)) {
            cout << i;
            break;
        }
    }

    return 0;
}