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
    int val = -2, ans = -1;
    for (int i = 0; i < N-K; i++) {
        for (int j = i+1; j <= i+K; j++) {
            if (num[i] == num[j]) val = num[i];
        }
        ans = max(val, ans);
    }

    cout << ans;

    return 0;
}