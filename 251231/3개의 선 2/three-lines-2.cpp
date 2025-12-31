#include <iostream>
#include <climits>

using namespace std;

int n;
int x[20], y[20];

bool check(int a, int b, int c) {
    bool is_deleted[21] = {false};
    int type[3] = {a, b, c};
    int first_idx = -1;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < n; j++) {
            if (!is_deleted[j]) {
                first_idx = j;
                break; 
            }
        }

        if (first_idx == -1) return true;

        int t_x = x[first_idx], t_y = y[first_idx];

        for (int j = 0; j < n; j++) {
            if (type[i] == 0) { // 세로선
                if (x[j] == t_x) is_deleted[j] = true;
            }
            else { // 가로선
                if (y[j] == t_y) is_deleted[j] = true;
            }
        }
    }
    for (int j = 0; j < n; j++) {
        if (!is_deleted[j]) return false;
    }
    
    return true;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    // Please write your code here.
    bool possible = false;
    for (int i = 0; i < 8; i++) {
        if (check(i >> 2 & 1, i >> 1 & 1, i & 1)) {
            possible = true;
            break;
        }
    }

    if (possible) cout << 1;
    else cout << 0;
    
    return 0;
}