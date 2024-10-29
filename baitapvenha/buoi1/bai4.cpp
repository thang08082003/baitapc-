#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    cin >> a; 
    cin >> b; 
    int sum = 0;
    for (int i = a; i <= b; i++) {
        sum += i; 
    }
    cout<< sum<<endl;
    return 0;
}