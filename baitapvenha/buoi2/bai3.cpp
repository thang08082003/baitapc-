#include <iostream>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while (t--) {
        char c; 
        cin >> c;

       
        if (c >= 'a' && c <= 'z') {
           
            cout << (char)(c - 32) << endl;
        } else if (c >= 'A' && c <= 'Z') {
         
            cout << (char)(c + 32) << endl;
        }
    }

    return 0;
}