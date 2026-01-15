#include <iostream>

using namespace std;

int N;
int a[100], b[100];

int main() {
    cin >> N;
    int win[6] = {}, ans = 0;

    for (int i = 0; i < N; i++) {
        cin >> a[i] >> b[i];
    }

    // Please write your code here.
    // 묵 찌 빠
    // 묵 빠 찌
    // 빠 찌 묵
    // 빠 묵 찌
    // 찌 묵 빠
    // 찌 빠 묵
    for (int j = 0; j < N; j++) {
        if (a[j] == 1 && b[j] == 2 ||
            a[j] == 2 && b[j] == 3 ||
            a[j] == 3 && b[j] == 1) win[0]++;
        if (a[j] == 1 && b[j] == 3 ||
            a[j] == 2 && b[j] == 1 ||
            a[j] == 3 && b[j] == 2) win[1]++;
        if (a[j] == 1 && b[j] == 3 ||
            a[j] == 2 && b[j] == 1 ||
            a[j] == 3 && b[j] == 2) win[2]++;
        if (a[j] == 1 && b[j] == 2 ||
            a[j] == 2 && b[j] == 3 ||
            a[j] == 3 && b[j] == 1) win[3]++;
        if (a[j] == 1 && b[j] == 3 ||
            a[j] == 2 && b[j] == 1 ||
            a[j] == 3 && b[j] == 2) win[4]++;
        if (a[j] == 1 && b[j] == 2 ||
            a[j] == 2 && b[j] == 3 ||
            a[j] == 3 && b[j] == 1) win[5]++;
        }

        for (int i = 0; i < 6; i++) {
            ans = max(ans, win[i]);
        }

        cout << ans;

    return 0;
}