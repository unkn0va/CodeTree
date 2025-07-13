#include <iostream>

using namespace std;

int a, b;

void modify(int *a, int *b) {
    if (*a < *b) {
        *a *= 2;
        *b += 25;
    }
    else {
        *a += 25;
        *b *= 2;
    }
}

int main() {
    cin >> a >> b;

    // Please write your code here.
    modify(&a, &b);
    cout << a << " " << b;
    return 0;
}