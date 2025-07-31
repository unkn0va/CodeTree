#include <iostream>

using namespace std;

int N, M;
int v[1000], t[1000];
int v2[1000], t2[1000];

int main() {
    cin >> N >> M;
    int time_a = 1, time_b = 1, first = 0, total = 0;
    int pos_a[1000001] = {}, pos_b[1000001] = {};

    for (int i = 0; i < N; i++) {
        cin >> v[i] >> t[i];
    }

    for (int i = 0; i < M; i++) {
        cin >> v2[i] >> t2[i];
    }

    // Please write your code here.
    for (int i = 0; i < N; i++) {
        while (t[i]--) {
            pos_a[time_a] = pos_a[time_a - 1] + v[i];
            time_a++;
        }
    }

    for (int i = 0; i < M; i++) {
        while (t2[i]--) {
            pos_b[time_b] = pos_b[time_b - 1] + v2[i];
            time_b++;
        }         
    }

    for (int i = 1; i < time_a; i++) {
        if (pos_a[i] > pos_b[i] && first != 1) {
            first = 1;
            total++;
        }
        else if (pos_a[i] < pos_b[i] && first != 2) {
            first = 2;
            total++;
        }
        else if (pos_a[i] == pos_b[i] && first != 3) {
            first = 3;
            total++;
        }
    }

    cout << total;
    return 0;
}