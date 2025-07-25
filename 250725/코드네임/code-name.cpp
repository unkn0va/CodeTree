#include <iostream>

#define MAX_N 5

using namespace std;

char codename[MAX_N];
int score[MAX_N];

class User {
    public:
        char codeName;
        int board;

        User(char codeName = 'A', int board = 0) {
            this->codeName = codeName;
            this->board = board;
        }
};

int main() {
    for (int i = 0; i < MAX_N; i++) {
        cin >> codename[i] >> score[i];
    }

    // Please write your code here.
    User users[5];
    int min_val = 0;
    for (int j = 0; j < 5; j++) {
        users[j] = User(codename[j], score[j]);
        if (score[j] < score[min_val]) min_val = j;
    }

    
    cout << users[min_val].codeName << " ";
    cout << users[min_val].board;
    return 0;
}
