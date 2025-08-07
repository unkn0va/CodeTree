#include <iostream>
#include <climits>

using namespace std;

int N, K;
int x[100];
char c[100];

int main() {
    cin >> N >> K;
    char placed[10001] = {};
    int max_val = 0, ans = INT_MIN, total = 0;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> c[i];
        placed[x[i]] = c[i];
        max_val = max(max_val, x[i]);
    }



    // Please write your code here.
    for (int i = 0; i <= max_val-K; i++) {
        total = 0;
        for (int j = 0; j <= K; j++) {
            if (placed[i+j] == 'G') total += 1;
            else if (placed[i+j] == 'H') total += 2;
        }
        ans = max(total, ans);
    }

    cout << ans;

    return 0;
}