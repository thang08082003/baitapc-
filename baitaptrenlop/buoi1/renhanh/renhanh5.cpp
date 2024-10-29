#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    
   
    cin >> a;
   
    cin >> b;
    
    cin >> c;

    
    int max;
    if (a >= b && a >= c) {
        max = a;
    } else if (b >= a && b >= c) {
        max = b;
    } else {
        max = c;
    }

   
    cout << "Max: " << max << endl;

    return 0;
}