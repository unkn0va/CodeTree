#include <iostream>

using namespace std;

int M, D;

bool isExist(int m, int d) {
    if (m > 12 || m < 1 || d > 31 || d < 1) return false;

    else if (m == 2) {
        if (d > 28) return false;
        else return true;
    }
    else if (m % 2 == 0 && m <= 6) {
        if (d == 31) return false;
        else return true;
    }
    else if (m % 2 == 0 && m >= 8) {
        return true;
    }
    else if (m % 2 != 0 && m <= 7) {
        return true;
    }
    else if (m % 2 != 0 && m >= 9) {
        if (d == 31) return false;
        else return true;
    }
}

int main() {
    cin >> M >> D;

    // Please write your code here.
    if (isExist(M, D)) cout << "Yes";
    else cout << "No";

    return 0;
}