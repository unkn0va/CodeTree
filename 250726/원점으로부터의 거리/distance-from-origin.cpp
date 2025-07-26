#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int N;
int x[1000];
int y[1000];

class Spot {
    public :
        int x, y, number;

        Spot(int x, int y, int number) {
            this->x = x;
            this->y = y;
            this->number = number;
        }

        Spot() {}
};

bool cmp(Spot a, Spot b) {
    if (abs(a.x) + abs(a.y) == abs(b.x) + abs(b.y)) return a.number < b.number;
    return abs(a.x) + abs(a.y) < abs(b.x) + abs(b.y);
}

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    // Please write your code here.
    Spot spots[1005];

    for (int j = 0; j < N; j++) {
        spots[j] = Spot(x[j], y[j], j+1);
    }
    sort(spots, spots+N, cmp);

    for (int j = 0; j < N; j++) {
        cout << spots[j].number << endl;
    }
    return 0;
}
