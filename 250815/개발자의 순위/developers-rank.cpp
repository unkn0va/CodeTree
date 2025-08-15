#include <iostream>

using namespace std;

int k, n;
int arr[10][20];

int main() {
    cin >> k >> n;
    int check[20][20] = {};

    for (int i = 0; i < k; i++)
        for (int j = 0; j < n; j++) cin >> arr[i][j];

    // Please write your code here.
    int cnt = 0;
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n-1; j++) {
            for (int k = j+1; k < n; k++) {
                check[arr[i][j]-1][arr[i][k]-1]++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (check[i][j] == n-1) cnt++;
        }
    }

    cout << cnt;

    return 0;
}