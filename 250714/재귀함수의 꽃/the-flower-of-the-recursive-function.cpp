#include <iostream>

using namespace std;

int N;

void printNumber(int n) {
    if (n == 0) return;

    cout << n << " ";
    printNumber(n-1);
    cout << n << " ";
}

int main() {
    cin >> N;

    // Please write your code here.
    printNumber(N);
    return 0;
}