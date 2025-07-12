#include <iostream>
#include <string>

using namespace std;

int a, b;

bool prime(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    cin >> a >> b;

    // Please write your code here.
    int cnt = 0;
    for (int i = a; i <= b; i++) {
        if (prime(i)) {
            string str = to_string(i);
            int len = str.length();
            int total = 0;
            for (int j = 0; j < len; j++) {
                total += str[j];
            }
            if (total % 2 == 0) cnt++;
        }
    }
    cout << cnt;
    return 0;
}