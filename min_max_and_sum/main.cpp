#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int max, min;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;

        if (i == 0) {
            max = m;
            min = m;
            sum = m;
        } else {
            if (max < m) {
                max = m;
            }
            if (min > m) {
                min = m;
            }
            sum += m;
        }
    }
    cout << min << " " << max << " " << sum << endl;
}
