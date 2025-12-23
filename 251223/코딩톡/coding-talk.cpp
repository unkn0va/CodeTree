#include <iostream>

using namespace std;

int n, m, p;
char c[100];
int u[100];

int main() {
    cin >> n >> m >> p;

    for (int i = 0; i < m; i++) {
        cin >> c[i] >> u[i];
    }

    // Please write your code here.
    int arr[26] = {};
    int cnt = 0;

    for (int i = p-1; i < m; i++) {
        arr[cnt++] = c[i] - 'A';
    }

    for (int j = 0; j < n; j++) {
        bool check = true;
        for (int k = 0; k < cnt; k++) {
            if (j == arr[k]) {
                check = false;
                break;
            }
        }
        if (check == true) {
            cout << (char)('A'+j) << " ";
        }
    }

    return 0;
}