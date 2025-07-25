#include <iostream>
#include <string>
#include <tuple>
#include <algorithm>

using namespace std;

int n;
string name[10];
int korean[10];
int english[10];
int math[10];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> korean[i];
        cin >> english[i];
        cin >> math[i];
    }

    // Please write your code here.
    tuple<int, int, int, string> students[11];
    for (int j = 0; j < n; j++) {
        students[j] = make_tuple(-korean[j], -english[j], -math[j], name[j]);
    }
    sort(students, students+n);

    for (int j = 0; j < n; j++) {
        tie(korean[j], english[j], math[j], name[j]) = students[j];
        cout << name[j] << " " << -korean[j] << " " << -english[j] << " " << -math[j] << endl;
    }
    return 0;
}