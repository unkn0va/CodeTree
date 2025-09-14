#include <iostream>

using namespace std;

int N;
int pigeon[100];
int position[100];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> pigeon[i] >> position[i];
    }

    // Please write your code here.
    int arr[101] = {}, cnt = 0;
    for (int i = 0; i < N; i++) {
        if (arr[pigeon[i]] == 0) {
            if (position[i] == 1) arr[pigeon[i]] = 2;
            else if (position[i] == 0) arr[pigeon[i]] = 3;
        }

        if (arr[pigeon[i]] != 0) {
            if (arr[pigeon[i]] == 2 && position[i] != 1) {
                cnt++;
                arr[pigeon[i]] = 3;
            }
            else if (arr[pigeon[i]] == 3 && position[i] != 0) {
                cnt++;
                arr[pigeon[i]] = 2;
            }
        }
    }

    cout << cnt;

    return 0;
}