#include <iostream>
using namespace std;

int main() {
    int h, w;
    while (cin >> h >> w) {
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (i == 0 || i == h - 1) {
                    cout << "#";
                } else {
                    if (j == 0 || j == w - 1) {
                        cout << "#";
                    } else {
                        cout << ".";
                    }
                }
            }
            cout << endl;
        }
        cout << endl;
    }
}
