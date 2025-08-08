#include <iostream>
#include <algorithm>

using namespace std;

int N, M;
int A[100], B[100];

int main() {
    cin >> N >> M;
    int mark[101] = {}, total = 0, cnt;

    for (int i = 0; i < N; i++) cin >> A[i];

    for (int i = 0; i < M; i++) cin >> B[i];
    sort(B, B+M);
    // Please write your code here.
    for (int i = 0; i <= N-M; i++) {
        cnt = 0;
        for (int j = i; j < i+M; j++) {
            mark[cnt++] = A[j];
        }
        sort(mark, mark+M);
        for (int k = 0; k < cnt; k++) {
            if (mark[k] != B[k]) break;
            else if (mark[k] == B[k] && k == cnt-1) total++;
        }
    }

    cout << total;

    return 0;
}