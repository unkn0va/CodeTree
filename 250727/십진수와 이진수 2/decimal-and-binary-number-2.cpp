#include <iostream>
#include <string>

using namespace std;

string N;

int main() {
    cin >> N;

    // Please write your code here.
    int num = 0, len = N.length();
    int binary[20], cnt = 0;
    for (int i = 0; i < len; i++) {
        num = num * 2 + (N[i] - '0');
    }

    num *= 17;
    while (1) {
        if (num < 2) {
            binary[cnt++] = num % 2;
            break;
        }
        binary[cnt++] = num % 2;
        num /= 2;
    }

    for (int i = cnt - 1; i >= 0; i--) {
        cout << binary[i];
    }

    return 0;
}