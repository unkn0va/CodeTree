#include <iostream>

using namespace std;

int N;

int fac(int n) {
    if (n == 1) return 1;
    return fac(n-1) * n;
}

int main() {
    cin >> N;

    // Please write your code here.
    cout << fac(N);
    return 0;
}