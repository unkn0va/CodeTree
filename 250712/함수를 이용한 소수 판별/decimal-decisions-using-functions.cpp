#include <iostream>

using namespace std;

bool primeNumber(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int a, b;

int main() {
    cin >> a >> b;

    int sum = 0;

    // Please write your code here.
    for (int i = a; i <= b; i++) {
        if (primeNumber(i)) sum += i;
    }
    cout << sum;

    return 0;
}