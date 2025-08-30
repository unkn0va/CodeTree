#include <iostream>
#include <climits>

using namespace std;

int n, m;
int arr[100];

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int ans = INT_MIN, val;
    for (int i = 1; i <= n; i++) {
        int sum = 0;
        int num = i;
        for (int j = 0; j < m; j++) {
            val = arr[num];
            sum += val;
            num = val;
        }
        ans = max(sum, ans);
    }

    cout << ans;

    return 0;
}