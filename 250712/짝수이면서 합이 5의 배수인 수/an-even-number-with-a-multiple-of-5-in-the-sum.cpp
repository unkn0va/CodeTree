#include <iostream>

using namespace std;

int n;

bool number(int n) {
    int ten, one;
    ten = n / 10;
    one = n % 10;
    return (ten + one) % 5 == 0 && n % 2 == 0;
}

int main() {
    cin >> n;

    // Please write your code here.
    if (number(n)) cout << "Yes";
    else cout << "No";
    return 0;
}