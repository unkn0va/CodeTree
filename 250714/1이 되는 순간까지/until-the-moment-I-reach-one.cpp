#include <iostream>

using namespace std;

int N, cnt = 0;

int f(int n) {
    if (n == 1) return cnt;

    cnt++;
    if (n % 2 == 0) return f(n/2);
    else return f(n/3);
}

int main() {
    cin >> N;

    // Please write your code here.
    cout << f(N);
    return 0;
}