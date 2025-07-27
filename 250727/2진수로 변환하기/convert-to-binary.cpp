#include <iostream>

using namespace std;

int n;

int main() {
    cin >> n;

    // Please write your code here.
    int digits[20] = {};
    int cnt = 0;

    while (1) {
        if (n < 2) {
            digits[cnt++] = n % 2;
            break;
        }
        digits[cnt++] = n % 2;
        n /= 2;
    }
    for (int i = cnt-1; i >= 0; i--) {
        cout << digits[i];
    }
    return 0;
}