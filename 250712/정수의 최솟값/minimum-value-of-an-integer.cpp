#include <iostream>

using namespace std;

int a, b, c;

int minInt(int a, int b, int c) {
    if (a > b) {
        if (b > c) return c;
        else return b;
    }
    else if (b > a) {
        if (a > c) return c;
        else return a;
    }
    else if (c > a) {
        if (a > b) return b;
        else return a;
    }
}

int main() {
    cin >> a >> b >> c;

    // Please write your code here.
    cout << minInt(a, b, c);
    return 0;
}