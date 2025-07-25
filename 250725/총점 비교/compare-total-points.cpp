#include <iostream>
#include <tuple>
#include <algorithm>

using namespace std;

int n;
string name[10];
int score1[10];
int score2[10];
int score3[10];

bool cmp(tuple<int, int, int, string> a, tuple<int, int, int, string> b) {
    int s1, s2, s3;
    string name1;
    tie(s1, s2, s3, name1) = a;
    int c1, c2, c3;
    string name2;
    tie(c1, c2, c3, name2) = b;
    return s1+s2+s3 < c1+c2+c3;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> score1[i];
        cin >> score2[i];
        cin >> score3[i];
    }

    // Please write your code here.
    tuple<int, int, int, string> students[11];
    for (int j = 0; j < n; j++) {
        students[j] = make_tuple(score1[j], score2[j], score3[j], name[j]);
    }

    sort(students, students+n, cmp);

    for (int j = 0; j < n; j++) {
        tie(score1[j], score2[j], score3[j], name[j]) = students[j];
        cout << name[j] << " " << score1[j] << " " << score2[j] << " " << score3[j] << endl; 
    }
    return 0;
}