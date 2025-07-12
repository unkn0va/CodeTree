#include <iostream>
#include <string>

using namespace std;

bool game(int n) {
    string str;
    str = to_string(n);
    int len = str.length();
    for (int i = 0 ; i < len; i++) {
        if (str[i] == '3' || str[i] == '6' || str[i] == '9')
            return true;
    }
    return false;
}

bool num(int i) {
    return i % 3 == 0 || game(i);
}

int a, b;

int main() {
    cin >> a >> b;
    int cnt = 0;

    // Please write your code here.
    for (int i = a; i <= b; i++) {
        if (num(i)) cnt++;
    }

    cout << cnt;

    return 0;
}