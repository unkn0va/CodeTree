#include <iostream>
#include <algorithm>

using namespace std;

int N, K, P, T;
int t[250];
int x[250];
int y[250];

class Dev {
    public :
        int time, x, y;

        Dev(int time, int x, int y) {
            this->time = time;
            this->x = x;
            this->y = y;
        }

        Dev() {}
};

bool cmp(Dev a, Dev b) {
    return a.time < b.time;
}

int main() {
    cin >> N >> K >> P >> T;
    int mv[101] = {}, get[101] = {};
    get[P] = 1;

    Dev d[251];
    for (int i = 0; i < T; i++) {
        cin >> t[i] >> x[i] >> y[i];
        d[i] = Dev(t[i], x[i], y[i]);
    }

    sort(d, d + T, cmp);

    for (int i = 0; i < T; i++) {
        if ((get[d[i].x] == 1 && mv[d[i].x] < 2) || (get[d[i].y] == 1 && mv[d[i].y] < 2)) {
            if (get[d[i].x] == 1 && mv[d[i].x] < 2) mv[d[i].x]++;
            if (get[d[i].y] == 1 && mv[d[i].y] < 2) mv[d[i].y]++;
            get[d[i].x] = 1;
            get[d[i].y] = 1;  
        }
    }

    for (int i = 1; i <= N; i++) {
        cout << get[i];
    }
    return 0;
}