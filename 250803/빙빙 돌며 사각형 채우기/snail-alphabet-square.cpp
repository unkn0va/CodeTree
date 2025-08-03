#include <iostream>

using namespace std;

int n, m;

bool inRange(int a, int b) {
    return a >= 0 && a < n && b >= 0 && b < m;
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    char blocks[101][101] = {}, c = 'A';
    int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1}, dir = 1, nx = 0, ny = 0, x = 0, y = 0;
    
    blocks[0][0] = c++;
    for (int i = 1; i < n*m; i++) {
        if (c > 'Z') c = 'A';
        nx += dx[dir], ny += dy[dir];
        if (!inRange(nx, ny) || blocks[nx][ny] != 0) {
            dir = (dir + 1) % 4;
        }
        x += dx[dir], y += dy[dir];
        nx = x, ny = y;
        blocks[x][y] = c++;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << blocks[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
