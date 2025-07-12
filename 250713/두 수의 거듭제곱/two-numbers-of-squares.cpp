#include <iostream>

using namespace std;

int a, b;

int number(int a, int b) {
    int result = 1;
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    return result;
}

int main() {
    cin >> a >> b;

    // Please write your code here.
    cout << number(a, b);
    return 0;
}