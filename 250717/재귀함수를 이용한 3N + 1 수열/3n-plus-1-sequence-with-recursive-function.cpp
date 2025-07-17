#include <iostream>
using namespace std;

int total = 0;

int number(int n) {
    if (n == 1) return total;

    if (n%2==0) {
        n /= 2;
        total += 1;
        return number(n);
    }
    else {
        n = n*3+1;
        total += 1;
        return number(n);
    }
}

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    cout << number(N);
    return 0;
}