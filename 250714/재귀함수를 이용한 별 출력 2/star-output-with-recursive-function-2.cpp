#include <iostream>

using namespace std;

int n;

void printStar(int n) {
    if (n == 0) return;
    for (int i = 0; i < n; i++) {
        cout << "*" << " ";
    }
    cout << endl;
    printStar(n-1);
    for (int j = 0; j < n; j++) {
        cout << "*" << " ";
    }
    cout << endl;
}

int main() {
    cin >> n;

    // Please write your code here.
    printStar(n);
    return 0;
}