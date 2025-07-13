#include <iostream>

using namespace std;

int N;

void printNumber1(int n) {
    if (n == 0) return;

    printNumber1(n-1);
    cout << n << " ";
}

void printNumber2(int n) {
    if (n == 0) return;

    cout << n << " ";
    printNumber2(n-1);
}

int main() {
    cin >> N;

    // Please write your code here.
    printNumber1(N);
    cout << endl;
    printNumber2(N);
    return 0;
}