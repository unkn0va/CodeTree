#include <iostream>
#include <climits>

using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int sum_diff = 0, ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        arr[i] *= 2;
        for (int j = 0; j < n; j++) {
            sum_diff = 0;
            for (int k = 0; k < n-1; k++) {
                if (j == k) continue;
                
                if (k+1 == j) sum_diff += abs(arr[k+2]-arr[k]);
                else sum_diff += abs(arr[k+1]-arr[k]);
            }

            ans = min(sum_diff, ans);
        }
        arr[i] /= 2;
    }

    cout << ans;

    return 0;
}