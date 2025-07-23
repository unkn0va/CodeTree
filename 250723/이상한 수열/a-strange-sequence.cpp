#include <iostream>

using namespace std;

int N;

int number(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;

    return number(n/3) + number(n-1);
} 

int main() {
    cin >> N;

    // Please write your code here.
    cout << number(N);
    return 0;
}