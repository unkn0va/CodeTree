#include <iostream>

using namespace std;

int N;

int number_even(int n) {
    if (n == 2) return 2;
    return number_even(n-2) + n;
}

int number_odd(int n) {
    if (n == 1) return 1;
    return number_odd(n-2) + n;
}

int main() {
    cin >> N;
    if (N % 2 == 0) cout << number_even(N);
    else cout << number_odd(N);
    // Please write your code here.

    return 0;
}