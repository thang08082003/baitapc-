#include <iostream>

using namespace std;


long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return (a * b) / gcd(a, b);
}

long long lcmUpToN(int n) {
    long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result = lcm(result, i);
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        cout << lcmUpToN(n) << endl;
    }
    
    return 0;
}