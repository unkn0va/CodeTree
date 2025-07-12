#include <iostream>

using namespace std;

int N;

int sum(int n) {
    int total = 0;
    for (int i = 1; i <= n; i++) {
        total += i;
    }
    return total / 10;
}

int main() {
    cin >> N;

    // Please write your code here.
    cout << sum(N);
    return 0;
}