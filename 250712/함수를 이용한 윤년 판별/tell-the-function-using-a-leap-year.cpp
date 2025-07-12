#include <iostream>

using namespace std;

int y;

bool year(int n) {
    if (n % 4 != 0) return false;
    else if (n % 100 == 0 && n % 400 != 0) return false;
    return true;
}

int main() {
    cin >> y;

    // Please write your code here.
    if (year(y)) cout << "true";
    else cout << "false";
    return 0;
}