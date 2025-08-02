#include <iostream>

using namespace std;

int N;
char dir[100];
int dist[100];

int direc(char a) {
    if (a == 'N') return 0;
    else if (a == 'E') return 1;
    else if (a == 'S') return 2;
    else return 3;
}

int main() {
    cin >> N;
    int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
    int x = 0, y = 0, index = -1, time = 0;

    for (int i = 0; i < N; i++) {
        cin >> dir[i] >> dist[i];
    }

    // Please write your code here.
    for (int i = 0; i < N; i++) {
        int d = direc(dir[i]);
        for (int j = 0; j < dist[i]; j++) {
            time++;
            x += dx[d], y += dy[d];
            if (x == 0 && y == 0) {
                index = time;
            }
        }
    }

    cout << index;

    return 0;
}