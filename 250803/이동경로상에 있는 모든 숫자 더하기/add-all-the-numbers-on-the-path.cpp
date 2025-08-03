#include <iostream>
#include <string>

using namespace std;

int N, T;
string str;
int board[100][100];

bool inRange(int a, int b) {
    return a >= 0 && a < N && b >= 0 && b < N;
}

int main() {
    cin >> N >> T;
    cin >> str;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> board[i][j];
        }
    }

    // Please write your code here.
    int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1}, dir = 0, total = board[N/2][N/2];
    int nx = N/2, ny = N/2, x = N/2, y = N/2;
    int len = str.length();
    for (int i = 0; i < len; i++) {
        if (str[i] == 'F') {
            nx += dx[dir], ny += dy[dir];
            if (!inRange(nx, ny)) {
                nx -= dx[dir], ny -= dy[dir];
                continue;
            }
            x += dx[dir], y += dy[dir];
            total += board[x][y];
            nx = x, ny = y;
        }
        else if (str[i] == 'R') {
            dir = (dir+1) % 4;
        }
        else {
            dir = (dir+3) % 4;
        }
    }

    cout << total;

    return 0;
}