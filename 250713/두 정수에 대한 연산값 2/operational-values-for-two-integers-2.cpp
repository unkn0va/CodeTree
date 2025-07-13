#include <iostream>

using namespace std;

int a, b;

void modify(int *a, int *b) {
    if (*a < *b) {
        *a += 10;
        *b *= 2;
    }
    else {
        *a *= 2;
        *b += 10;
    }
}

int main() {
    cin >> a >> b;

    // Please write your code here.
    modify(&a, &b);
    cout << a << " " << b;
    return 0;
}