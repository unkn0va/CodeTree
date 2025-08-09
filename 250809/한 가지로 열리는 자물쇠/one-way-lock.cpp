#include <iostream>

using namespace std;

int N;
int a, b, c;

int main() {
    cin >> N;
    cin >> a >> b >> c;

    // Please write your code here.
    int total = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            for (int k = 1; k <= N; k++) {
                if (abs(i-a) <= 2 || abs(j-b) <= 2 || abs(k-c) <= 2) total++;
            }
        }
    }

    cout << total;

    return 0;
}