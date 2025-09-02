#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int N, K;
int arr[1000];

int main() {
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int cnt = 0, ans = INT_MIN;
    sort(arr, arr+N);
    for (int i = 0; i < N; i++) {
        cnt = 1;
        for (int j = i+1; j < N; j++) {
            if (arr[j] <= arr[i]+K) {
                cnt++;
            }
            else break;
        }
        ans = max(cnt, ans);
    }

    cout << ans;

    return 0;
}