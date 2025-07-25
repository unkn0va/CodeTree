#include <iostream>
#include <tuple>
#include <algorithm>

using namespace std;

int N;
int h[1000];
int w[1000];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> h[i] >> w[i];
    }

    // Please write your code here.
    tuple<int, int, int> students[1001];
    for (int j = 0; j < N; j++) {
        students[j] = make_tuple(-h[j], -w[j], j+1);
    }
    
    sort(students, students+N);
    for (int j = 0; j < N; j++) {
        int number, h, w;
        tie(h, w, number) = students[j];
        cout << -h << " " << -w << " " << number << endl;
    }
    return 0;
}