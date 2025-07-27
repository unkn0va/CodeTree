#include <iostream>

using namespace std;

int N, B;

int main() {
    cin >> N >> B;

    // Please write your code here.
    int cnt = 0, binary[20] = {}, num = 0;
    while (1) {
        if (N < B) {
            binary[cnt++] = N % B;
            break;
        }
        binary[cnt++] = N % B;
        N /= B;
    }

    for (int i = cnt - 1; i >= 0; i--) {
        cout << binary[i];
    }
    return 0;
}