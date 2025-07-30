#include <iostream>
#include <algorithm>

using namespace std;

int N;
int arr[1000];

int main() {
    cin >> N;
    int cnt = 0, ans = 0;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    for (int i = 0; i < N; i++) {
        if (i == 0 || arr[i-1] < arr[i]) {
            cnt++;
        }
        else {
            cnt = 1;
        }

        ans = max(ans, cnt);
    }

    cout << ans;
    return 0;
}