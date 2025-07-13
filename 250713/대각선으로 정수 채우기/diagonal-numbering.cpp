#include <iostream>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;

    // Please write your code here.
    int arr[100][100] = {}, num = 1;
    for (int i = 0; i < n+m-1; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < m; k++) {
                if (j + k == i) arr[j][k] = num++;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
