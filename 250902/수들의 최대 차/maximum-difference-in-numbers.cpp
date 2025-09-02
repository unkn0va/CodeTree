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
    int cnt, ans = INT_MIN;
    sort(arr, arr+N);
    for (int i = 0; i < N; i++) {
        for (int j = i+1; j < N; j++) {
            if (arr[j] > arr[i]+K) {
                cnt = j-i;
                break;
            }
        }
        ans = max(cnt, ans);
    }

    cout << ans;

    return 0;
}