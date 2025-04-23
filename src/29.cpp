#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    
    if (n > 0) {
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 || i % 5 == 0)
                continue;
            cout << i << endl;
        }
    } else
        cout << "Please enter a positive integer." << endl;

    return 0;
}
