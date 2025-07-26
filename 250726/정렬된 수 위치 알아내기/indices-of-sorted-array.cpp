#include <iostream>
#include <algorithm>

using namespace std;

int N;
int sequence[1000];

class Number {
    public :
        int n, num;

        Number(int n, int num) {
            this->n = n;
            this->num = num;
        }

        Number() {}
};

bool cmp(Number a, Number b) {
    return a.n < b.n;
}

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> sequence[i];
    }

    // Please write your code here.
    Number numbers[1000], numb[1000];
    for (int j = 0; j < N; j++) {
        numbers[j] = Number(sequence[j], j+1);
    }
    
    sort(numbers, numbers+N, cmp);
    for (int j = 0; j < N; j++) {
        numb[j] = Number(numbers[j].num, j+1);
    }
 
    sort(numb, numb+N, cmp);
    for (int j = 0; j < N; j++) {
        cout << numb[j].num << " ";
    }
    
    return 0;
}
