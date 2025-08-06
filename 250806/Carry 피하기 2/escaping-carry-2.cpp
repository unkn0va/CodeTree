#include <iostream>
#include <climits>

using namespace std;

int n;
int arr[20];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int total = 0, ans = INT_MIN;
    for (int i = 0; i < n-2; i++) {
        for (int j = i+1; j < n-1; j++) {
            for (int k = j+1; k < n; k++) {
                if (arr[i]%10 + arr[j]%10 + arr[k]%10 < 10
                && (arr[i]%100)/10 + (arr[j]%100)/10 + (arr[k]%100)/10 < 10
                && (arr[i]%1000)/100 + (arr[j]%1000)/100 + (arr[k]%1000)/100 < 10
                && arr[i]/1000 + arr[j]/1000 + arr[k]/1000 < 10) {
                    total = arr[i]+arr[j]+arr[k];
                }
                ans = max(ans, total);
            }
        }
    }
    cout << ans;

    return 0;
}