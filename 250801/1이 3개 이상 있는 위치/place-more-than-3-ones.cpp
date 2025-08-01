#include <iostream>

using namespace std;

int n;
int grid[100][100];

bool isRange(int x, int y, int n) {
    return (x >= 0 && x < n && y >= 0 && y < n);
}

int main() {
    cin >> n;
    int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
    int cnt = 0, total = 0; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cnt = 0;
            for (int k = 0; k < 4; k++) {
                int x = i + dx[k], y = j + dy[k];
                if (isRange(x, y, n) && grid[x][y] == 1) cnt++;
            }
            if (cnt >= 3) total++;
        }
    }

    cout << total;
    return 0;
}