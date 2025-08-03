#include <iostream>

using namespace std;

int N, M;
int r[10000], c[10000];

bool inRange(int a, int b) {
    return a >= 0 && a <= N && b >= 0 && b < N;
}

int main() {
    cin >> N >> M;
    int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
    int blocks[101][101] = {};
    for (int i = 0; i < M; i++) {
        cin >> r[i] >> c[i];
    }

    // Please write your code here.
    for (int i = 0; i < M; i++) {
        int cnt = 0;
        blocks[r[i]-1][c[i]-1] = 1;
        for (int j = 0; j < 4; j++) {
            if (inRange(r[i]-1+dx[j], c[i]-1+dy[j]) && blocks[r[i]-1+dx[j]][c[i]-1+dy[j]] == 1) cnt++;
        }
        if (cnt == 3) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}