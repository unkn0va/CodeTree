#include <iostream>
#include <algorithm>

using namespace std;

int n, m;
int t[50000];
char d[50000];
int t_b[50000];
char d_b[50000];
int times1[1000001] = {}, times2[1000001] = {};

int main() {
    cin >> n >> m;
    int cnt1 = 1, cur1 = 0, cnt2 = 1, cur2 = 0, total = 0;

    for (int i = 0; i < n; i++) {
        cin >> t[i] >> d[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> t_b[i] >> d_b[i];
    }

    // Please write your code here.
    for (int i = 0; i < n; i++) {
        if (d[i] == 'R') {
            for (int j = cnt1; j < cnt1 + t[i]; j++) {
                times1[j] = ++cur1;
            }
            cnt1 += t[i];
        }
        else {
            for (int j = cnt1; j < cnt1 + t[i]; j++) {
                times1[j] = --cur1;
            }
            cnt1 += t[i];
        }
    }

    for (int i = 0; i < m; i++) {
        if (d_b[i] == 'R') {
            for (int j = cnt2; j < cnt2 + t_b[i]; j++) {
                times2[j] = ++cur2;
            }
            cnt2 += t_b[i];
        }
        else {
            for (int j = cnt2; j < cnt2 + t_b[i]; j++) {
                times2[j] = --cur2;
            }
            cnt2 += t_b[i];
        }
    }
    //for (int i = 0; i < 30; i++) {
        //cout << times1[i] << " ";
    //}
    //cout << endl;
    //for (int i = 0; i < 30; i++) {
        //cout << times2[i] << " ";
    //}
    //cout << endl;
    for (int i = 1; i <= max(cnt1, cnt2); i++) {
        if (times1[i] == times2[i] && times1[i-1] != times2[i-1]) {
            //cout << i << endl;
            total++;
        }    
    }

    cout << total;
    return 0;
}