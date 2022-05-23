#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            cout << " " << i;
            continue;
        } else if (i % 10 == 3) {
            cout << " " << i;
            continue;
        }
        int j = i / 10;
        while (j > 0) {
            if (j % 10 == 3) {
                cout << " " << i;
                break;
            }
            j /= 10;
        }
    }
    cout << endl;
}
