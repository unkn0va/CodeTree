#include <iostream>

using namespace std;

int N;

int fibonacci(int n) {
    if (n == 1 || n == 2) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    cin >> N;

    // Please write your code here.
    cout << fibonacci(N);
    return 0;
}