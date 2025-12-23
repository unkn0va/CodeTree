#include <iostream>

using namespace std;

int X;

int main() {
    cin >> X;

    // Please write your code here.
    int va = 0;
    for (int i = 1; i < X/2; i++) {
        if (i*i < X) va = i;
        else break;
    }

    int time = 2 * va - 1;
    if (X == va*va) cout << time;
    else if (X <= va*va + va) cout << time + 1;
    else cout << time + 2;

    return 0;
}