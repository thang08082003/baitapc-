#include <iostream>
using namespace std;

long long fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    
    long long a = 1, b = 1; 
    long long c;

    for (int i = 3; i <= n; ++i) {
        c = a + b; 
        a = b;     
        b = c;     
    }
    return b;
}

int main() {
    int T;
    cin >> T; 
    while (T--) {
        int n;
        cin >> n; 
        cout << fibonacci(n) << endl; 
    }
    
    return 0;
}