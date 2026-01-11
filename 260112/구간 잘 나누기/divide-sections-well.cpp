#include <iostream>
#include <climits>

using namespace std;

int main() {
    // Please write your code here.
    int n, m, max_val = INT_MIN;
    int arr[101];

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        max_val = max(arr[i], max_val);
    }

    while (1) {
        int cnt = 1;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (sum + arr[i] > max_val) {
                cnt++;
                sum = arr[i];
            }
            else sum += arr[i];
        }

        if (cnt == m) break;
        else max_val++;
    }

    cout << max_val;


    return 0;
}