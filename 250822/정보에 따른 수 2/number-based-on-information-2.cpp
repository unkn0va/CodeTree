#include <iostream>
#include <climits>

using namespace std;

int T, a, b;
char c[100];
int x[100];

int main() {
    cin >> T >> a >> b;

    for (int i = 0; i < T; i++) {
        cin >> c[i] >> x[i];
    }

    // Please write your code here.
    int cnt = 0, n_d = INT_MAX, n_s = INT_MAX;
    for (int i = a; i <= b; i++) {
        n_d = INT_MAX, n_s = INT_MAX;
        for (int j = 0; j < T; j++) {
            if (c[j] == 'N') {
                n_d = min(n_d, abs(i-x[j]));
            }
            else if (c[j] == 'S') {
                n_s = min(n_s, abs(i-x[j]));
            }
        }
        if (n_d >= n_s) cnt++;
    }

    cout << cnt;

    return 0;
}