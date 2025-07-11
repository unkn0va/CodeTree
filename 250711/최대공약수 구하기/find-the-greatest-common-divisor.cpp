#include <iostream>

using namespace std;

int n, m;

void num(int n, int m) {
    int max_val = 1;

    for (int i = 2; i <= m; i++) {
        if (n % i == 0 && m % i == 0) {
            max_val = i;
        }
    }

    cout << max_val;
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    num(n, m);
    return 0;
}