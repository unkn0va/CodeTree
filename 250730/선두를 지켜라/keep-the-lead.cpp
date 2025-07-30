#include <iostream>
#include <algorithm>

using namespace std;

int N, M;
int v[1000], t[1000];
int v2[1000], t2[1000];
int times1[1000001] = {}, times2[1000001] = {}, first[1000001] = {};

int main() {
    cin >> N >> M;
    int cur1 = 1, cnt1 = 0, cur2 = 1, cnt2 = 0, total = 0;

    for (int i = 0; i < N; i++) cin >> v[i] >> t[i];

    for (int i = 0; i < M; i++) cin >> v2[i] >> t2[i];

    // Please write your code here.
    for (int i = 0; i < N; i++) {
        for (int j = cur1; j < cur1 + t[i]; j++) {
            times1[j] = cnt1 + v[i];
            cnt1 += v[i];
        }
        cur1 = cur1 + t[i];
    }
    for (int i = 0; i < M; i++) {
        for (int j = cur2; j < cur2 + t2[i]; j++) {
            times2[j] = cnt2 + v2[i];
            cnt2 += v2[i];
        }
        cur2 = cur2 + t2[i];
    }

    for (int i = 1; i < min(cur1, cur2); i++) {
        if (times1[i] < times2[i]) first[i] = 2;
        else if (times1[i] > times2[i]) first[i] = 1;
        else first[i] = first[i-1];
    }
    
    for (int i = 2; i < min(cur1, cur2); i++) {
        if (first[i-1] != first[i]) total++;
    }
    cout << total;
    
    return 0;
}