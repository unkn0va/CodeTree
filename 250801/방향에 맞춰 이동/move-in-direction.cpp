#include <iostream>

using namespace std;

int n;
char dir[100];
int dist[100];

int main() {
    cin >> n;
    int dx = 0, dy = 0;
    for (int i = 0; i < n; i++) {
        cin >> dir[i] >> dist[i];
    }

    // Please write your code here.
    for (int i = 0; i < n; i++) {
        if (dir[i] == 'N') {
            dy += dist[i];
        }
        else if (dir[i] == 'E') {
            dx += dist[i];
        }
        else if (dir[i] == 'W') {
            dx -= dist[i];
        }
        else if (dir[i] == 'S') {
            dy -= dist[i];
        }
    }

    cout << dx << " " << dy;
    return 0;
}