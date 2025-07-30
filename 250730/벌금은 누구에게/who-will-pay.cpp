#include <iostream>

using namespace std;

int N, M, K;
int student[10000] = {};
int penalty[101] = {};

int main() {
    cin >> N >> M >> K;
    bool find = false;

    for (int i = 0; i < M; i++) {
        cin >> student[i];
    }

    // Please write your code here.
    for (int i = 0; i < M; i++) {
        penalty[student[i]]++;
        if (penalty[student[i]] >= K) {
            find = true;
            cout << student[i];
            break;
        }
    }
    if (find == false) cout << -1;
    return 0;
}