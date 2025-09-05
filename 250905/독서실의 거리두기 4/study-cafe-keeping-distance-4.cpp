#include <iostream>
#include <string>
#include <climits>

using namespace std;

int N;
string seat;

int minDist() {
    int dist = N;

    for (int i = 0; i < N; i++) {
        for (int j = i+1; j < N; j++) {
            if (seat[i] == '1' && seat[j] == '1') dist = min(dist, j-i);
        }
    }

    return dist;
}

int main() {
    cin >> N;
    cin >> seat;

    // Please write your code here.
    int ans = INT_MIN;
    for (int i = 0; i < N; i++) {
        if (seat[i] != '0') continue;
        seat[i] = '1';
        for (int j = 0; j < N; j++) {
            if (seat[j] != '0') continue;
            seat[j] = '1';

            ans = max(ans, minDist());

            seat[j] = '0'; 
        }
        seat[i] = '0';
    }

    cout << ans;

    return 0;
}