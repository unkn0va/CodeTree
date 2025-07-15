#include <iostream>

using namespace std;

int a, b, c;

int num(int n) {
    if (n < 10) {
        return n;
    }
    return num(n/10) + n % 10;
}

int main() {
    cin >> a >> b >> c;
    int result = a*b*c;
    // Please write your code here.
    cout << num(result);
    return 0;
}