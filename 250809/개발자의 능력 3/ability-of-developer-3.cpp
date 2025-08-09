#include <iostream>
#include <climits>

using namespace std;

int abilities[6];

int getDiff(int a, int b, int c) {
    int sum1 = abilities[a] + abilities[b] + abilities[c];
    int sum2 = 0;
    for (int l = 0; l < 6; l++) {
        sum2 += abilities[l];
    }

    sum2 -= sum1;
    return abs(sum1-sum2);
}

int main() {
    for (int i = 0; i < 6; i++) {
        cin >> abilities[i];
    }

    // Please write your code here.
    int min_diff = INT_MAX;
    for (int i = 0; i < 6; i++) {
        for (int j = i+1; j < 6; j++) {
            for (int k = j+1; k < 6; k++) {
                min_diff = min(min_diff, getDiff(i, j, k));
            }
        }
    }

    cout << min_diff;

    return 0;
}