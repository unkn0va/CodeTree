#include <iostream>

using namespace std;

int N, K;
int num[100];

int main() {
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }

    // Please write your code here.
    int val = -5, ans = -1;
    for (int i = 0; i < N-1; i++) {
        for (int j = i+1; j < N; j++) {
            if (j > i+K) break;

            if (num[i] == num[j]) {
                val = num[i];
                break;
            }
        }
        ans = max(val, ans);
    }

    cout << ans;

    return 0;
}