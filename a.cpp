#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int S, A, B, C;
        cin >> S >> A >> B >> C;

        double newPrice = S + (S * C / 100.0);

        if (newPrice >= A && newPrice <= B) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}