#include <iostream>
using namespace std;

int main() {
    float a, b;
    char c;

    
    cin >> a;
    
    cin >> b;
    
    cin >> c;

    
    switch (c) {
        case '+':
            cout << a<<"+"<<b<< "=" <<(float) (a + b) << endl;
            break;
        case '-':
            cout << a<<"-"<<b<< "=" <<(float) (a - b) << endl;
            break;
        case '*':
            cout << a<<"*"<<b<< "=" <<(float) (a * b) << endl;
            break;
        case '/':
            if (b != 0) {
                cout << a<<"%"<<b<< "=" <<(float) (a / b) << endl;
            } else {
                cout << "Cant devide 0!" << endl;
            }
            break;
        default:
            cout << "Invalid" << endl;
            break;
    }

    return 0;
}