#include <iostream>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while (t--) {
        long long N; 
        cin >> N;

        
        long long S = (N * (N + 1)) / 2;
        
        
        cout << S << endl;
    }

    return 0;
}