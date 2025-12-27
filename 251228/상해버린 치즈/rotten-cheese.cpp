#include <iostream>

using namespace std;

int N, M, D, S;
int p[1000], m[1000], t[1000];
int sick_p[50], sick_t[50];

int main() {
    cin >> N >> M >> D >> S;
    int cheeze[51] = {}, student[1001] = {}, sum = 0, cnt = 0;

    for (int i = 0; i < D; i++) {
        cin >> p[i] >> m[i] >> t[i];
    }

    for (int i = 0; i < S; i++) {
        cin >> sick_p[i] >> sick_t[i];
        sum += sick_p[i];
    }

    // Please write your code here.
    for (int i = 0; i < S; i++) {
        for (int j = 0; j < D; j++) {
            if (sick_p[i] == p[j] && sick_t[i] > t[j]) cheeze[m[j]] += p[j];
        }
    }


    for (int i = 0; i < D; i++) {
        if (student[p[i]] != 1 && cheeze[m[i]] != 0) {
            student[p[i]] = 1;
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}