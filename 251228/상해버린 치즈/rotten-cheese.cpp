#include <iostream>
#include <climits>

using namespace std;

int N, M, D, S;
int p[1000], m[1000], t[1000];
int sick_p[50], sick_t[50];

int main() {
    cin >> N >> M >> D >> S;
    int cheeze[51] = {}, student[1001] = {}, cnt = 0, result = 0;

    for (int i = 0; i < D; i++) {
        cin >> p[i] >> m[i] >> t[i];
    }

    for (int i = 0; i < S; i++) {
        cin >> sick_p[i] >> sick_t[i];
    }

    // Please write your code here.
    for (int i = 1; i <= M; i++) {
        cnt = 0;
        for (int j = 0; j < S; j++) {
            for (int k = 0; k < D; k++) {
                if (p[k] == sick_p[j] && m[k] == i && t[k] < sick_t[j]) {
                    cnt++;
                    break;
                }
            }
        }
        for (int j = 0; j < 1001; j++) {
            student[j] = 0;
        }

        if (cnt == S) {
            cnt = 0;
            for (int j = 0; j < D; j++) {
                if (student[p[j]] == 0 && i == m[j]) {
                    student[p[j]] = 1;
                    cnt++;
                }
            }

            result = max(cnt, result);
        }
    }

    cout << result;
    
    return 0;
}