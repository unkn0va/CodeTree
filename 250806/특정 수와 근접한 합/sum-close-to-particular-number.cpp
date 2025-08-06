#include <iostream>
#include <climits>

using namespace std;

int N, S;
int arr[100];

int main() {
    cin >> N >> S;
    int sum = 0, total, ans = INT_MAX;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    // Please write your code here.
    for (int i = 0; i < N-1; i++) {
        for (int j = i+1; j < N; j++) {
            total = sum - arr[i] - arr[j];
            ans = min(abs(total-S), ans);
        }
    }

    cout << ans;

    return 0;
}