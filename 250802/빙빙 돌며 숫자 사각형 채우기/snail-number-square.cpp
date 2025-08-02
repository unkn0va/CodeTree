#include <iostream>

using namespace std;

int n, m;
int arr[100][100];

bool inRange(int a, int b) {
    return (a >= 0 && a < n && b >= 0 && b < m);
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
    int x = 0, y = 0, num = 1, dir = 0;
    int ans[101][101] = {};
    ans[x][y] = num++;

    for (int i = 1; i < n * m; i++) {
        int nx = x + dx[dir], ny = y + dy[dir];
        if (!inRange(nx, ny) || ans[nx][ny] != 0) {
            dir = (dir + 1) % 4;
        }
        x += dx[dir], y += dy[dir];
        ans[x][y] = num++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}