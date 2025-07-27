#include <iostream>
#include <cstring>

using namespace std;

char binary[9];

int main() {
    cin >> binary;

    // Please write your code here.
    int n = 0;
    int len = strlen(binary);
    for (int i = 0; i < len; i++) {
        n = n * 2 + (binary[i] - '0');
    }
    cout << n;
    return 0;
}