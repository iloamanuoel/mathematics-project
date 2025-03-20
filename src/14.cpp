#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    
    if (n > 0) {
        for (int i = 1; i <= n; ++i) {
            if (i % 2 == 0) {
                cout << i << " is even.";
            } else {
                cout << i << " is odd.";
            }
        }
    } else {
        cout << "The number must be positive." << endl;
    }

    return 0;
}
