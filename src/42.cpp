#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    if (num1 > num2) {
        cout << "The first number is larger." << endl;
    } else {
        cout << "The second number is larger." << endl;
    }
    
    return 0;
}
