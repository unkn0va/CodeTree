#include <iostream>
#include <climits>

using namespace std;

int N, K;
int candy[100] = {}, pos[100] = {};

int main() {
    cin >> N >> K;
    int max_val = 0, sum, ans = INT_MIN;
    int placed[400] = {};

    for (int i = 0; i < N; i++) {
        cin >> candy[i] >> pos[i];
        max_val = max(pos[i], max_val);
        placed[pos[i]] = candy[i];
    }

    // Please write your code here.
    for (int i = K; i < max_val; i++) {
        sum = 0;
        for (int j = i-K; j <= i+K; j++) {
            sum += placed[j];
            ans = max(sum, ans);
        }
    }

    cout << ans;

    return 0;
}