#include <iostream>

using namespace std;

int N;
int a1, b1, c1;
int a2, b2, c2;

int main() {
    cin >> N;
    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;

    // Please write your code here.
    int total = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            for (int k = 1; k <= N; k++) {
                if ((i == 1 && (a1 == N || a1 == N-1)) || (i == N && (a1 == 1 || a1 == 2)) || (i == N-1 && a1 == 1) || abs(i-a1) <= 2) {
                    if ((j == 1 && (b1 == N || b1 == N-1)) || (j == N && (b1 == 1 || b1 == 2)) || (j == N-1 && b1 == 1) || abs(j-b1) <= 2) {
                        if ((k == 1 && (c1 == N || c1 == N-1)) || (k == N && (c1 == 1 || c1 == 2)) || (k == N-1 && c1 == 1) || abs(k-c1) <= 2) {
                            total++;
                            continue;
                        }
                    }
                }
                if ((i == 1 && (a2 == N || a2 == N-1)) || (i == N && (a2 == 1 || a2 == 2)) || (i == N-1 && a2 == 1) || abs(i-a2) <= 2) {
                    if ((j == 1 && (b2 == N || b2 == N-1)) || (j == N && (b2 == 1 || b2 == 2)) || (j == N-1 && b2 == 1) || abs(j-b2) <= 2) {
                        if ((k == 1 && (c2 == N || c2 == N-1)) || (k == N && (c2 == 1 || c2 == 2)) || (k == N-1 && c2 == 1) || abs(k-c2) <= 2) {
                            total++;
                            continue;
                        }
                    }
                }
            }
        }
    }

    cout << total;

    return 0;
}