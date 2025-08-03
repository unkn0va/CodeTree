#include <iostream>

using namespace std;

int n, m;

bool inRange(int a, int b) {
    return a >= 0 && a < n && b >= 0 && b < m;
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    int blocks[101][101] = {}, num = 1, nx = 0, ny = 0, x = 0, y = 0;
    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, 0, 1};

    blocks[0][0] = num++;
    int dir = 0;
    for (int i = 1; i < n*m; i++) {
        nx += dx[dir], ny += dy[dir];
        if (!inRange(nx, ny) || blocks[nx][ny] != 0) {
            dir = (dir+3) % 4;
        }
        x += dx[dir], y += dy[dir];
        nx = x, ny = y;
        blocks[x][y] = num++;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << blocks[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}