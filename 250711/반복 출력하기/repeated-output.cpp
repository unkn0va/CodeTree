#include <iostream>

using namespace std;

int N;

void printStars(int n) {
    for (int i = 0; i < n; i++)
        cout << "12345^&*()_" << endl;
}

int main() {
    cin >> N;

    // Please write your code here.
    printStars(N);

    return 0;
}