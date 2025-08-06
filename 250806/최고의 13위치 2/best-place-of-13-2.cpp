#include <iostream>
#include <climits>

using namespace std;

int N;
int arr[20][20];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) cin >> arr[i][j];

    // Please write your code here.
    int sum, ans = INT_MIN;
    for (int i = 0; i < N-1; i++) {
        for (int j = 0; j < N-2; j++) {
            for (int k = i+1; k < N; k++) {
                for (int l = 0; l < N-2; l++) {
                    sum = arr[i][j] + arr[i][j+1] + arr[i][j+2]
                        + arr[k][l] + arr[k][l+1] + arr[k][l+2];
                    ans = max(ans, sum);
                }
            }
        }
    }
    cout << ans;
    return 0;
}