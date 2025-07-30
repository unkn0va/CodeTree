#include <iostream>
#include <algorithm>

using namespace std;

int N;
int arr[1000];

int main() {
    cin >> N;
    int ans = 0, cnt = 0;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    for (int i = 0; i < N; i++){
        if (i == 0 || arr[i] * arr[i-1] < 0) {
            cnt = 1;
        }
        else {
            cnt++;
        }

        ans = max(ans, cnt);
    }

    cout << ans;
    
    return 0;
}