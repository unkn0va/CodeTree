#include <iostream>
#include <string>

using namespace std;

int N, M;
string arr[50];

bool inRange(int a, int b) {
    return a >= 0 && a < N && b >= 0 && b < M;
}

int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1}, dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};
    int curr_x, curr_y, total = 0, nx, ny;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (arr[i][j] != 'L') continue;

            curr_x = i, curr_y = j;
            for (int k = 0; k < 8; k++) {
                nx = curr_x, ny = curr_y;
                nx += dx[k], ny += dy[k];
                if (!inRange(nx, ny)) continue;

                if (arr[nx][ny] == 'E') {
                    nx += dx[k], ny += dy[k];
                    if (!inRange(nx, ny)) continue;
                    if (arr[nx][ny] == 'E') total++;
                }
            }
             
        }
    }

    cout << total;

    return 0;
}