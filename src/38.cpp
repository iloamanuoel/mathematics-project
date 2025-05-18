#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }
    
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            cout << "The number " << n << " is not a prime number." << endl;
            return 1;
        }
    }
    
    cout << "The number " << n << " is a prime number." << endl;
    return 0;
}
