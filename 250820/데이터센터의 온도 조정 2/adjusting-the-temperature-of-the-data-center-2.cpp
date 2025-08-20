#include <iostream>

using namespace std;

int N, C, G, H;
int Ta[1000], Tb[1000];

int main() {
    cin >> N >> C >> G >> H;
    int min_val = 0, max_val = 0;
    int sum = 0, ans = 0;
    for (int i = 0; i < N; i++) {
        cin >> Ta[i] >> Tb[i];
        min_val = min(Ta[i], min_val);
        max_val = max(Tb[i], max_val);
    }

    // Please write your code here.
    for (int i = min_val; i <= max_val; i++) {
        sum = 0;
        for (int j = 0; j < N; j++) {
            if (i < Ta[j]) sum += C;
            else if (Ta[j] <= i && i <= Tb[j]) sum += G;
            else if (i > Tb[j]) sum += H;
        }
        ans = max(sum, ans);
    }

    cout << ans;

    return 0;
}