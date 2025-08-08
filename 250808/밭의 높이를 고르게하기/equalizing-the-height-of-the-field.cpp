#include <iostream>
#include <climits>

using namespace std;

int N, H, T;
int arr[100];

int main() {
    cin >> N >> H >> T;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int total, ans = INT_MAX;
    for (int i = 0; i < N-T+1; i++) {
        total = 0;
        for (int j = i; j < i+T; j++) {
            total += abs(arr[j]-H);
        }
        ans = min(total, ans);
    }

    cout << ans;

    return 0;
}