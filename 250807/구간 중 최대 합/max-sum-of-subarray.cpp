#include <iostream>
#include <climits>

using namespace std;

int n, k;
int arr[100];

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int sum = 0, ans = INT_MIN;
    for (int i = 0; i <= n-k; i++) {
        sum = 0;
        for (int j = i; j < i+k; j++) {
            sum += arr[j];
        }
        ans = max(sum, ans);
    }

    cout << ans;

    return 0;
}